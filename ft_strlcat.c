/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:42:07 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/04/28 17:29:57 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
<<<<<<< HEAD

int	ft_strlcat(char *dst, const char *src, t_size_t size)
{
	t_size_t	s;
	int			len_dst;
	int			return_value;
=======
#include <string.h>


t_size_t	ft_strlcat(char *dest, const char *src, t_size_t size)
{
	t_size_t	i;
	int			len_dest;
	int			len_src;
>>>>>>> 97ceb82b5bc3b8f14ef9c508d9304112ce76417f

	len_src = ft_strlen((char *)src);
	len_dest = ft_strlen(dest);
	if (size == 0)
		return (len_src);
	else if (size < len_dest)
		return (len_src + size);
	else
		len_src += len_dest;
	i = 0;
	while (src[i] && (len_dest + i) < size - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_src);
}

int	main(int ac, char **av)
{
	char 	*s1 = av[1];
	char	s2[30] = "hola ";
	char	s3[30] = "hola ";
	t_size_t		retorno;

	system("clear");
	retorno = ft_strlcat(s2, s1, atoi(av[2]));

	printf ("src: %s\n\n", s1);
	printf ("dest ini: %s\n\n", s2);
	
	printf ("dest final: %s \nretorno: %d\n\n", s2, retorno);
	
	retorno = strlcat(s3, s1, atoi(av[2]));
	printf ("ori dest final: %s \nretorno> %d\n", s3, retorno);

	return (0);
}
