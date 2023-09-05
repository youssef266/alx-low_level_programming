#include "main.h"

/**
 * **strtow - a function that splits a string into words.
 * @str: string
 *
 * Return: 0
*/

char **strtow(char *str)
{
	int wordCount = 0;
	char *token = strtow(str, " ");
	char **words;
	int i, j;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	while (token != NULL)
	{
		wordCount++;
		token = strtok(NULL, " ");
	}
	words = (char **)malloc((wordCount + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	i = 0;
	token = strtok(str, " ");
	while (token != NULL)
	{
		words[i] = strdup(token);
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		i++;
		token = strtok(NULL, " ");
	}
	words[i] = NULL;
	return (words);
}
