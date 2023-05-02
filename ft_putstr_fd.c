/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:24:15 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/05/02 18:50:57 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write (fd, &s, 1);
		s++;
	}
}

static int	  prep(char *s)
{
		int	 fd;

		fd = open ("../textfile.txt", O_WRONLY | O_CREAT, 0644);
		if (fd < 0)
		{
				return (1);
		}
		ft_putstr_fd(s, fd);
		close(fd);
		return (0);
}

int	 main(int ac, char **av)
{
		prep(av[1]);
		return (0);
}
