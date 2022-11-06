#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*n;

	n = (unsigned char *)b;
	while (len-- > 0)
		n[len] = (unsigned char)c;
	return (b);
}
