/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 13:45:59 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/05/14 14:08:36 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	w_add(char **res, char *start, char c)

static int	w_count(const char **s, char c)

char	**ft_split(const char **s, char c)
{
	char	**start;
	char	**res_head;
	char	**res_temp;
	
	start = (char *)s;
	res_head = (char **) malloc (sizeof(char *) * (w_count(s, c) + 1));
	if (!res_head)
		return (NULL);
	res_head[w_count(s, c)] = NULL;
	res_temp = res_head;
	while (start)
	{
		if (!(w_add(res_temp, start, c))
			return (NULL);
		res_temp++;
		start = update_start(start, c);
	}
	return (res_head);
}
		
/*
int	main(void)
{
	char 	s[] = "          HOLA          TEST   HOLA  ";
	char	c = ' ';
	char	**arr;
	int		i;

	i = 0;
	arr = ft_split(s, c);
	while (arr[i])
	{
		printf ("%s\n", arr[i]);
		i++;
	}
	return (0);
}
*/
