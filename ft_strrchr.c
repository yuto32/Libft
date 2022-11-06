#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*a;

	a = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			a = (char *)s;
		}
		s++;
	}
	if (*s == '\0' && (char)c == '\0')
		return ((char *)s);
	return (a);
}
