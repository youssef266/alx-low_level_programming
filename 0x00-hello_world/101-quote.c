#include <unistd.h>

/**
 * main - entery point
 *
 * Description: prent a qoute using write function
 *
 * Reaturn: 1 (error)
*/

int main(void)
{	char quo[] = "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
