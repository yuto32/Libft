#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (dst);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

//int main(void)
//{
//	printf("%s\n", (char *)memcpy(NULL, "world", 3));
//	printf("%s\n", (char *)ft_memcpy(NULL, "world", 3));
//	return (0);
//}