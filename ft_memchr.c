void	*ft_memchr(const void *s, int c, ft_size_t n)
{
	unsigned char	*ptr;
	unsigned char	uc;
	ft_size_t		i;

	ptr = (unsigned char)s;
	i = 0;
	while (i < n)
	{
		uc = (unsigned char)c;
		if (ptr[i] == uc)
			return (s + i);
		i++;
	}
	return (NULL);
}
