#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	i;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	p = malloc(count * size);
	if (p == NULL)
		return (NULL);
	i = count * size;
	ft_bzero(p, count * size);
	if (i / count != size)
		return (NULL);
	return (p);
}
