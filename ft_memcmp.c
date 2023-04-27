int	ft_memcmp(const void *s1, const void *s2, ft_size_t n)
{
	unsigned char	us1;
	unsigned char	us2;
	ft_size_t		i;

	us1 = (unsigned char)s1;
	us2 = (unsigned char)s2;
	i = 0;
	while (i < n && us1[i] == us2[i])
	{
		i++;
	}
	return ((int)us1[i] - (int)us2[i]);
}
