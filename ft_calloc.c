#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

void free_all(size_t i, void **ptr)
{
	while (i >= 0)
	{
		free(*(ptr + i));
		i --;
	}
	free(ptr);
}

void *ft_calloc(size_t nmemb, size_t size)
{
	void	**ptr;
	size_t	i;

	if (nmemb * size == 0)
		return (NULL);
	ptr = malloc (sizeof(void *) * nmemb);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb)
	{
		*(ptr + i) = malloc (size);
		if (*(ptr + i) == NULL)
		{
			free_all(i, ptr);
			exit (1);
		}
		else
			*(ptr + i) = NULL;
		i++;
	}
	return (ptr);
}
	// mem for nmemb of size
	// all

int	main(void)
{
	char **ptr;
	int i;
	int j;
	char c;

	ptr = ft_calloc (10, 10);
	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			c = (char) ptr[i][j];
			printf ("%c", c);
			j++;
		}
		i++;
	}
	return (0);
}
