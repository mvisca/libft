/*
#include <stdio.h>
#include <stddef.h>
#include <string.h>
*/

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	char	*c_dest;
	char	*c_src;
	size_t	i;

	c_dest = (char *) dest;
	c_src = (char *) src;
	i = 0;
	while (i < n)
	{
		*(c_dest + i) = *(c_src + i);
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char src[] = "caballo";
	char dest[20];

	ft_memcpy(dest, src, (strlen(src) + 1));
	printf ("len: %lu; dest: %s; src: %s\n", strlen(src), dest, src);
	return (0);
}
*/
