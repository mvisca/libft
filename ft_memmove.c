#include <stdio.h>
#include <stdlib.h>

void    *ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
        char    *c_dest;
        char    *c_src;
        size_t  i;

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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*temp;
	char		*c_src;
	size_t	i;

	temp = (char *) malloc (sizeof(src) + sizeof(dest));
	if (temp == NULL)
		return (NULL);
	temp = ft_memcpy(temp, dest, sizeof(src) + sizeof(dest));
	c_src = (char *) src;
	i = 0;
	while (src + i < src + n)
	{
		*(temp + i) = *(c_src + i);
		i++;
	}
	dest = ft_memcpy(dest, temp, sizeof(dest));
	free (temp);
	return (dest);
}

int	main(void)
{
	char	s1[] = "Ho la mundo";
	char	*ss;

	printf ("Antes: %s\n", s1);
	ft_memmove(&s1[2], &s1[3], sizeof(s1));
	printf ("Después: %s\n", s1);
	return (0);
}
