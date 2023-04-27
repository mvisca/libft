/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:20:20 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/04/24 18:20:52 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, ft_size_t n)
{
	ft_size_t	i;

	i = 0;
	while (i < n && s1[i] && s1[i] == s2[i])
		i++;
	return ((unsigned int)s1[i] - (unsigned int)s2[i]);
}