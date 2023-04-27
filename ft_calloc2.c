#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

void free_all(size_t i, void **ptr)
{
	size_t j;

	j = 0;
	while (j < i)
	{
	free(*(ptr + j));
		j++;
	}
	free(ptr);
	ptr = NULL;
}

void *ft_calloc(size_t nmemb, size_t size)
{
	void	**ptr;
	size_t	i;

	if (nmemb * size == 0)
		return (NULL);
	
	ptr = (void **) malloc (sizeof(void *) * nmemb);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < nmemb)
	{
		*(ptr + i) = (void *) malloc (size);
		if (*(ptr + i) == NULL)
		{
			free_all(i, ptr);
			return (NULL);
		}
		i++;
	}
	return (ptr);
}

int main(void)
{
	char	**cptr;
	int		i;
	int		j;

	cptr = (char **) ft_calloc (4, 10);
	if (cptr == NULL)
	{
		printf ("FAIL");
		return (1);
	}
	
	printf ("OK\n");
	i = 0;
	while (i < 4)
	{
		printf ("\nGO i = %d\n", i);
		j = 0;
		while (j < 10)
		{
			printf ("\nGO j = %d\n", j);
			*(*(cptr + i) + j) = 'a' + j + i;
			j++;
			}
		printf ("%s", *(cptr + i));
		i++;
	}
    return (0);
}
