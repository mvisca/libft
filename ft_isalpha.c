/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 11:51:49 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/04/20 18:15:15 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Helper functions prototyping

static int	isupper(int	c);
static int	islower(int	c);

// Main function

int	isalpha(int	c)
{
	if (isupper(c) || islower(c))
	{
		return (1);
	}
	return (0);
}

// Helper functions definition

static int	isupper(int	c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

static int	islower(int	c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
