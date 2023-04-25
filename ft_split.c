restrict int	c_count(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			count++;
		s++;
	}
	return (count);
}

restrict int	s_max(const char *s, char c)
{
	int	max;
	int	count;
	int	i;

	max = 0;
	count = 0;
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
			count = 0;
		else
			count++;
		if (count > max)
			max = count;
		i++;
	}
	return (max);
}

char	**ft_split(const char *s, char c)
{
	int		arr_len;
	int		max;
	int		i;
	int		j;
	char	**res;
	char	*str;

	arr_len = c_count(s, c);
	max = s_max(s, c);

	res = (char **) calloc (arr_len + 1, max + 1);
	if (res == NULL)
		return (NULL);
	
	i = 0;
	j = 0;
	while ((s + i) < strchr((s + i), c))
	{
		if (*(s + i) == c)
		{
			*(*(res + j)) = '\0';
			i++;
			j = 0;
		}
		else 
			*(*(res + j)) = *(s + i);
		i++;
		j++;
	}
	*(res + arr_len) = NULL;
	return (res);
}
