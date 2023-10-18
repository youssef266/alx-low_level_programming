#include "main.h"
#include <elf.h>
/**
 * check_elf- verify the file to check if is a ELF
 * @e_ident: the ELF struct
 * return: Nothing
 */
void check_elf(unsigned char *e_ident)
{
if (e_ident[0] == 0x7f && e_ident[1] == 'E' &&
e_ident[2] == 'L' && e_ident[3] == 'F')
{
printf("ELF Header:\n");
}
else
{
dprintf(STDERR_FILENO, "Error: this file not is a valid ELF\n");
exit(98);
}
}
/**
 * magic- print the magic number of ELF
 * @e_ident: the ELF struct
 * return: Nothing
 */
void magic(unsigned char *e_ident)
{
int index;
printf("  Magic:   ");
for (index = 0; index < EI_NIDENT - 1; index++)
{
printf("%02x ", e_ident[index]);
}
printf("%02x\n", e_ident[index]);
}
/**
 * class- print the class number of ELF
 * @e_ident: the ELF struct
 * return: Nothing
 */
void class(unsigned char *e_ident)
{
printf("  Class:                             ");

switch (e_ident[EI_CLASS])
{
case ELFCLASSNONE:
printf("none\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}
/**
 * data- print the data number of ELF
 * @e_ident: the ELF struct
 * return: Nothing
 */
void data(unsigned char *e_ident)
{
printf("  Data:                              ");

switch (e_ident[EI_DATA]) /*EI_DATA - Data encoding*/
{
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_DATA]);
}
}
/**
 * version- print the version  of ELf
 * @e_ident: the ELF struct
 * return: Nothing
 */
void version(unsigned char *e_ident)
{
printf("  Version:                           ");
if (e_ident[EI_VERSION] == EV_CURRENT)
printf("%i (current)\n", EV_CURRENT);
else
printf("%i\n", e_ident[EI_VERSION]);
}
/**
 * osabi- print the osabi  of ELf
 * @e_ident: the ELF struct
 * return: Nothing
 */
void osabi(unsigned char *e_ident)
{
printf("  OS/ABI:                            ");

switch (e_ident[EI_OSABI])/*EI_OSABI = OS Application Binary Interface*/
{
case ELFOSABI_SYSV:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
case ELFOSABI_AIX:
printf("UNIX - AIX\n");
break;
case ELFOSABI_IRIX:
printf("UNIX - IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64\n");
break;
case ELFOSABI_ARM:
printf("ARM\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}
}
/**
 * abi- print the abi  of ELf
 * @e_ident: the ELF struct
 * return: Nothing
 */
void abi(unsigned char *e_ident)
{
printf("  ABI Version:                       ");
printf("%d\n", e_ident[EI_ABIVERSION]);
}
/**
 * type- print the type  of ELf
 * @e_type: data to compare
 * @e_ident: the ELF struct
 * return: Nothing
 */
void type(unsigned int e_type, unsigned char *e_ident)
{
if (e_ident[EI_DATA] == ELFDATA2MSB)
e_type >>= 8;
printf("  Type:                              ");
switch (e_type)
{
case ET_NONE:
printf("NONE (None)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown: %x>\n", e_type);
}
}
/**
 * entry- print the entry  of ELf
 * @e_entry: data to print
 * @e_ident: the ELF struct
 * return: Nothing
 */
void entry(unsigned long int e_entry, unsigned char *e_ident)
{
printf("  Entry point address:               ");

if (e_ident[EI_DATA] == ELFDATA2MSB)
{
e_entry = ((e_entry << 8) & 0xFF00FF00) |
((e_entry >> 8) & 0xFF00FF);
e_entry = (e_entry << 16) | (e_entry >> 16);
}
if (e_ident[EI_CLASS] == ELFCLASS32)
printf("%#x\n", (unsigned int)e_entry);
else
printf("%#lx\n", e_entry);
}
/**
 * main - check the code
 * @ac: argument counter
 * @av: argument vector
 * Return: Always 0.
 */
int main(int ac, char **av)
{
int fd, rd, cl;
Elf64_Ehdr *elf;
if (ac != 2)
dprintf(STDERR_FILENO, "number of argments is not true\n"), exit(98);
elf = malloc(sizeof(Elf64_Ehdr));
if (elf == NULL)
dprintf(STDERR_FILENO, "Error: in malloc\n"), exit(98);
fd = open(av[1], O_RDONLY);
if (fd == -1)
{
free(elf);
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
}
rd = read(fd, elf, sizeof(Elf64_Ehdr));
if (rd == -1)
{
free(elf);
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
}
check_elf(elf->e_ident);
magic(elf->e_ident);
class(elf->e_ident);
data(elf->e_ident);
version(elf->e_ident);
osabi(elf->e_ident);
abi(elf->e_ident);
type(elf->e_type, elf->e_ident);
entry(elf->e_entry, elf->e_ident);
free(elf);
cl = close(fd);
if (cl == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close the file\n");
exit(98);
}
return (0);
}
