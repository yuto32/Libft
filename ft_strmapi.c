#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	size_t	i;

	if (!s || !f)
		return (NULL);
	p = ft_strdup(s);
	if (!(p))
		return (NULL);
	i = 0;
	while (p[i])
	{
		p[i] = (*f)(i, p[i]);
		i++;
	}
	return (p);
}
