#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*(str + len))
		len++;
	return (len);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new;
	int		i;
	int		l_s1;
	int		l_s2;

	l_s1 = ft_strlen((char *) s1);
	l_s2 = ft_strlen((char *) s2);
	new = (char *) malloc (sizeof(char) * (l_s1 + l_s2 + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < l_s1 + l_s2)
	{
		if (i < l_s1)
			*(new + i) = *(s1 + i);
		else
			*(new + i) = *(s2 + i - l_s1);
		i++;
	}
	*(new + i) = '\0';
	return (new);
}


int main() {
    char str1[] = "Hello ";
    char str2[] = "World";
    char *result = ft_strjoin(str1, str2);

    printf("Result: %s\n", result);

    free(result);

    return 0;
}
