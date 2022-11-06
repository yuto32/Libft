#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		needlelen;

	needlelen = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && needlelen <= len)
	{
		if (ft_strncmp(haystack, needle, needlelen) == 0 )
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
