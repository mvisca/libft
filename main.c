#include "libft.h"

static void free_all(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		arr[i] = NULL;
		i++;
	}
	free(arr);
}

int     main(void)
{
        char    s[] = "HELOO!";
        char    c = ' ';
      	char    **arr;
       	int     i;

       	i = 0;
        arr = ft_split(s, c);
		while (arr && arr[i])
        {
                printf ("%s\n", arr[i]);
                i++;
        }
		free_all(arr);
        return (0);
}
