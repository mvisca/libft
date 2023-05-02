/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:23:25 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/05/02 14:43:38 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	isupper(int c)
{
	if ((unsigned char) c >= 'A' && (unsigned char) c <= 'Z')
	{
		return (1);
	}
	return (0);
}

static int	islower(int c)
{
	if ((unsigned char) c >= 'a' && (unsigned char) c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	ft_isalpha(int c)
{
	if (isupper(c) || islower(c))
	{
		return (1);
	}
	return (0);
}
