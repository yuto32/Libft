#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	length;

	length = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(char) * (length + 1));
	if (s2 == NULL)
		return (NULL);
	return (ft_memcpy(s2, s1, length + 1));
}
