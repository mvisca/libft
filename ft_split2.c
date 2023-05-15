#include "libft.h"

static void	ft_free_all(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

static int	ft_count(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while(s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

static char	**ft_get_words(char **split, const char *s, char c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			start = i + 1;
		if (s[i] != c && s[i + 1] == c)
		{
			split[k] = ft_strdup(s, start, i - start);
			if (!split[k++])
				return (NULL);
		}
		i++;
	}
	split[k] = NULL;
	return (split);
}

char	**ft_split(const char **s, char c)
{
	int		start;
	char	**split,

	if (!s)
		return (NULL);
	split = malloc (sizeof(char *) * (ft_count(s, c) + 1));
	if (!split)
		return (NULL);
	split = ft_get_words(split, s, c);
	if (!split)
	{
		ft_free_all(split);
		return (NULL);
	}
	return (split);
}
