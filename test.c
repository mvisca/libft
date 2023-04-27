#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

void	test_is(int (*f)(int), char *name)
{
	char	*str = "aA1!\200\n\t";
	int		c;

	printf ("<== \033[1;32m %s \033[0m de \033[0;31m %s \033[0m ==>\n", __func__, name);
	while (*str)
	{
		c = f(*str);
		printf ("La funcion %s('%c') retorna %d.\n", name, *str, c);
		str++;
	}
}

int	main(int ac, char **av)
{
	system("clear");
	printf ("Ejecutanto %s\n", __func__);
	test_is(&isalpha, "isalpha");
	test_is(&isdigit, "isdigit");
	test_is(&isalnum, "isalnum");
	test_is(&isprint, "isprint");
	test_is(&isascii, "isascii");

	

	return (0);
}
