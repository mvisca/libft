#include <stdio.h>

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	n;
	int	neg;

	if (nptr == NULL)
		return (0);
	neg = 1;
	if (*(nptr) == '-')
	{
		neg = -1;
		nptr++;
	}
	n = 0;
	i = 0;
	while (*(nptr + i) && ft_isdigit(*(nptr + i)))
	{
		n = (n * 10) + *(nptr + i) - '0';
		i++;
	}
	return (n * neg);
}

int	main(int ac, char **av)
{
	printf ("%d", ft_atoi(av[1]));
	return (0);
}
