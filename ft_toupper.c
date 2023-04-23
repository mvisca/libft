int	ft_toupper(int	c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c -= 32);
	}
	
}

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c += 32);
	}
}

char	*strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*(s + i))
		if (*(s + i) == c)
		{
			return (s + i);
		}
	return (NULL);
}

restrict ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (*(s + i) == c)
			return (s + i);
		i--;
	}
	return (NULL);
}

int	strncmp(const char *s1, const char *s2, ft_size_t n)
{
	ft_size_t	i;

	i = 0;
	while (i < n && s1[i] && s1[i] == s2[i])
		i++;
	return ((unsigned int)s1[i] - (unsigned int)s2[i]);
}

void	*memchr(const void *s, int c, ft_size_t n)
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

int	memcmp(const void *s1, const void *s2, ft_size_t n)
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

char *strnstr(const char *s1, const char *s2, ft_size_t n)
{
	ft_size_t	i;	
	ft_size_t	j;

	if (*s2 == '\0')
		return (s1);
	i = 0;
	while (s1[i] && i < n)
	{
		j = 0;
		while (s1[i + j] == s2[j])
		{
			if (s2[j + 1] == '\0')
			{
				return (s1 + i + j);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
