#include "libft.h"
#include <stdlib.h>

// #include <stdio.h>


void    *ft_memcpy(void *restrict dest, const void *restrict src, t_size_t n)
{
        char    	*c_dest;
        const char	*c_src;
        t_size_t  	i;

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
