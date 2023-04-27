#include "libft.h"

char	*ft_shift(char *s)
{
	char	*tmp;
	int		 i;

	if (ft_strlen(s) == 0)
		return (s);

	tmp = (char *) malloc (sizeof(char) * ft_strlen(s));
	if (tmp == NULL)
		return (NULL);

	if (ft_strlen(s) < 2)
	{
		*(tmp) = '\0';
		free(s);
		return (tmp);
	}

	i = 1;
	while (*(s + i))
	{
		*(tmp + i - 1) = *(s + i);
		i++;
	}
	*(tmp + i - 1) = '\0';
	return (tmp);
}

/*
int	main(void)
{
	char 	s1[] = "Hola, mundo!";
	char	*s2;

	s2 = ft_shift(s1);
	printf ("%s\n", s2);
	return (0);
}
*/
