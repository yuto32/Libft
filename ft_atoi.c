#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t		n;
	size_t		i;
	long long	a;

	i = 0;
	n = 1;
	a = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		   || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			n *= -1;
	while (ft_isdigit(str[i]))
	{
		a = a * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(a * n));
}
