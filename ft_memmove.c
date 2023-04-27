#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, t_size_t n)
{
	char	*temp;
	
	if (dest == src)
		return (dest);

	temp = (char *) malloc (sizeof(char) * n);
	ft_memcpy(temp, src, n);
	ft_memcpy(dest, temp, n);
	free(temp);
	return (dest);
}

/*
#include <stdlib.h>

int	main(void)
{
	char	s1[] = "Ho la mundo";
	char	*ss;

	printf ("Antes: %s\n", s1);
	ft_memmove(&s1[2], &s1[3], sizeof(s1));
	printf ("Después: %s\n", s1);
	return (0);
}
*/
