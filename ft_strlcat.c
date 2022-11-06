#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char			*d;
	const char		*s;
	size_t			n;
	size_t			dlen;

	d = dst;
	s = src;
	n = dstsize;
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = dstsize - dlen;
	if (n == 0)
		return (dlen + ft_strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}

//int main(void)
//{
//	char	real[12] = "hello";
//	char	phony[12] = "hello";
//	char	p[] = " world";
//	printf("%zu\n", strlcat(real, p, sizeof(real)));
//	printf("%zu\n", strlcat(NULL, NULL, sizeof(real)));
//	printf("%zu\n", ft_strlcat(phony, p, sizeof(phony)));
//	printf("%zu\n", ft_strlcat(NULL, NULL, sizeof(phony)));
//	printf("%s\n", real);
//	printf("%s\n", phony);
//	return (0);
//}