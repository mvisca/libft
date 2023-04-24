#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// USAR LIBRERIAS PROPIAS

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*res;
	char	*ini;
	int		len_set;
	int		len_s1;
	int		i;

	len_set = strlen(set);
	len_s1 = strlen(s1);
	
	res = (char *) malloc (sizeof(char) * len_s1 - len_set + 1);
	if (res == NULL)
		return (NULL);
	
	ini = strstr(s1, set);
	i = 0;
	while ((s1 + i) < (s1 + len_s1 - len_set))
	{
		if ((s1 + i) < (ini))
			*(res + i) = *(s1 + i);
		else
			*(res + i) = *(s1 + i + len_set);
		i++;
	}
	*(res + i + len_set) = '\0';
	return (res);
}

int	main(void)
{
	char	s1[] = "Quitar quitar algo";
	char	set[] = "quitar ";
	char	*res;

	res = ft_strtrim(s1, set);
	printf ("%s", res);
	return (0);
}
