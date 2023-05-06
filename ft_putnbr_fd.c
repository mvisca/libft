/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:04:28 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/05/04 14:20:33 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*nbr;

	nbr = ft_itoa(n);
	ft_putstr_fd(nbr, fd);
}

/*
static int	  prep(char *s)
{
	int	 fd;

	fd = open ("../textfile.txt", O_WRONLY | O_CREAT, 0644);
	if (fd < 0)
	{
		return (1);
	}
	ft_putnbr_fd(atoi(s), fd);
	close(fd);
	return (0);
}

int	 main(int ac, char **av)
{
	prep(av[1]);
	system("cat -e ../textfile.txt");
	system("rm ../textfile.txt");
	return (0);
}*/