/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:37:07 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/04/28 20:23:00 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char * needle, t_size_t len)
{
	char	*scpy;
	int 	i;
/*
	scpy = (char *) s;
	i = ft_strlen(s) + 1;
	while (i >= 0)
	{

	}
*/
	return (NULL);
}

int	main(void)
{
	char	str[] = "Hola que tal hay x aqui";
	char	c[] = "x a";

	printf ("%s\n", ft_strnstr(str, c));
	printf ("%s\n", strnstr(str, c));
	return (0);
}
