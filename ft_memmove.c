#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	a;

	if (!dst && !src)
		return (dst);
	if (dst > src)
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	else
	{
		a = 0;
		while (a < len)
		{
			((char *)dst)[a] = ((char *)src)[a];
			a++;
		}
	}
	return (dst);
}
