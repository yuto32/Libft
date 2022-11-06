#include "libft.h"

static size_t	count_strs(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			count++;
			while (*s != '\0' && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static char	**ft_freemalloc(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
	return (NULL);
}

static char	**ft_splitsub(char const *s, char c, char **split, size_t index)
{
	size_t		length;
	const char	*p;

	while (*s != '\0')
	{
		while (*s && *s == c)
			s++;
		p = s;
		length = 0;
		while (*s && *s != c)
		{
			s++;
			length++;
		}
		if (*(s - 1) != c)
		{
			split[index] = ft_substr(p, 0, length);
			if (!split[index])
				return (ft_freemalloc(split));
			index++;
		}
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char			**split;
	size_t			index;

	index = 0;
	if (!s)
		return (NULL);
	split = (char **) ft_calloc(((count_strs(s, c)) + 1), sizeof(char *));
	if (!split)
		return (NULL);
	return (ft_splitsub(s, c, split, index));
}

/*
int main (void)
{
	char *s = "AAzbmbmocsbobo";
	char **a;

	a = ft_split(s,'b');
	if(a)
		printf("%s",a[0]);
	system("leaks a.out");
	return(0);
}
*/
