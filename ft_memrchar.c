void	*memrchr(const void *s, int c, ft_size_t n)
{
	unsigned char   *ptr;
	unsigned char   uc;
	ft_size_t		i;

	ptr = (unsigned char)s;
	i = ft_strlen(ptr);
	while (i >= 0)
	{
		uc = (unsigned char)c;
		if (ptr[i] == uc)
			return (s + i);
		i--;
	}
	return (NULL);
}
