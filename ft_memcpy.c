#include "libft.h"

void  *ft_memcpy(void *restrict dest, const void *restrict src, t_size_t n)
{
	char	  *c_dest;
	const char   *c_src;
	t_size_t	i;

	c_dest = dest;
	c_src = src;
	while (n)
	{
		*c_dest = *c_src;
		c_dest++;
		c_src++;
		n--;
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
