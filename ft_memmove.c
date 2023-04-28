/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:55:11 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/04/28 17:49:12 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	d_minor_s(t_size_t *i, t_size_t *e, t_size_t n, int *d)
{
	*i = 0;
	*e = n - 1;
	*d = 1;
}

static void	s_minor_d(t_size_t *i, t_size_t *e, t_size_t n, int *d)
{
	*i = n - 1;
	*e = 0;
	*d = -1;
}

void	*ft_memmove(void *dest, const void *src, t_size_t n)
{
	t_size_t	i;
	t_size_t	end;
	int			delta;
	
	if (dest == src)
		return (dest);
	if (dest < src)
		d_minor_s(&i, &end, n, &delta);
	else
		s_minor_d(&i, &end, n, &delta);
	while (i != end + delta)
	{
		((char *)dest)[i] = *(((char *) src) + i);
		i += delta;
	}
<<<<<<< HEAD
	((char *)dest)[i] = *(((char *) src) + i);
=======
>>>>>>> 97ceb82b5bc3b8f14ef9c508d9304112ce76417f
	return (dest);
}

// hacer sin malloc, ver cuando se superponen o no
// d < s mv de d[0] -> d[n]
// s < d mv de d[n] -> d[0]

int	main(void)
{
	char s1[] = "01234567890abcdef";
	char s2[] = "01234567890abcdef";

//	printf ("ORIGINAL=%s\n", s1);
	ft_memmove(&s1[1], &s1[5], 7);

	printf ("MODIFIED=%s\n", s1);

	printf ("La de string.h\n");
	
//	printf ("ORIGINAL=%s\n", s2);
	memmove(&s2[1], &s2[5], 7);

	printf ("MODIFIED=%s\n", s2);
	return (0);
}
