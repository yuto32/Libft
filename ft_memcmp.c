#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*d;
	size_t			i;

	a = (unsigned char *)s1;
	d = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (a[i] != d[i])
			return (a[i] - d[i]);
		i++;
	}
	return (0);
}
