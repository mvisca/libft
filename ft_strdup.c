#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*dup;

	i = 0;
	while (*s)
		i++;
	dup = malloc (sizeof(char) * i);
	if (dup == NULL)
		return (NULL);
	j = 0;
	while (*(s + j))
	{
		*(dup + j) = *(s + j);
		j++;
	}
	*(dup + j) = '\0';
	return (dup);
}


int main() {
    char *original_str = "Hola mundo";
    char *copied_str = strdup(original_str);
    
    printf("La cadena original es: %s\n", original_str);
    printf("La cadena copiada es: %s\n", copied_str);

    free(copied_str);

    return 0;
}
