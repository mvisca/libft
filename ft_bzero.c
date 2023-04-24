#include <unistd.h>

void	bzero(void *s, size_t n)
{
	int		i;
	char	*ptr;

	ptr = (char*) s;
	while (i < n)
		*(ptr + i++) = '\0';
}

/*
void	show(char *str, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (*(str + i) == '\0')
			write (1, "0", 1);
		else
			write (1, (str + i), 1);
		i++;
	}
}

int	main(void)
{
	char	str[] = "Hola Hola sigo probando";

	show(str, 23);
	write (1, "\n", 1);
	bzero(&str, 20);
	write (1, "\n", 1);
	show(str, 23);
	return (0);
}
*/
