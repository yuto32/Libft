#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	d;
	size_t			i;

	i = 0;
	a = (unsigned char *) s;
	d = (unsigned char) c;
	while (i < n)
	{
		if (*a == d)
			return (a);
		a++;
		i++;
	}
	return (NULL);
}
