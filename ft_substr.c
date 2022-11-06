#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p;
	size_t	len_malloc;

	if (s == NULL)
		return (NULL);
	if ((size_t)start > ft_strlen(s) || len == 0 )
		return (ft_strdup(""));
	if (ft_strlen(s) >= start + len)
		len_malloc = len;
	else
		len_malloc = ft_strlen(s) - start;
	p = (char *)malloc(sizeof(char) * (len_malloc + 1));
	if (!p)
		return (NULL);
	i = -1;
	j = 0;
	while (s[++i])
		if (i >= start && j < len)
			p[j++] = s[i];
	p[j] = '\0';
	return (p);
}
