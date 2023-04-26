#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, t_size_t len)
{
	unsigned char	*sub;
	t_size_t		i;

	sub = (char *) malloc (sizeof(char) * len);
	if (sub == NULL)
		return (NULL);

	i = 0;
	while (i < len && (unsigned char)*(s + start + i))
	{
		*(sub + i) = *(s + start + i);
		i++;
	}
	*(sub + i) = '\0';
	return (sub);
}

/* 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str = "Hola mundo!";
    char *sub = ft_substr(str, 5, 5);

    printf("La cadena original es: %s\n", str);
    printf("La subcadena es: %s\n", sub);

    free(sub);

    return 0;
}
*/
