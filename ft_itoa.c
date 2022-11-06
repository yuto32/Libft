/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimomu <yshimomu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:09:57 by yshimomu          #+#    #+#             */
/*   Updated: 2022/11/06 12:10:00 by yshimomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	absolute_value(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

static int	get_len(int nbr)
{
	int	length;

	length = 0;
	if (nbr <= 0)
		++length;
	while (nbr != 0)
	{
		++length;
		nbr = nbr / 10;
	}
	return (length);
}

char	*ft_itoa(int nbr)
{
	char	*result;
	int		length;

	length = get_len(nbr);
	result = malloc(sizeof(char) * (length + 1));
	if (!result)
		return (NULL);
	result[length] = '\0';
	if (nbr < 0)
		result[0] = '-';
	else if (nbr == 0)
		result[0] = '0';
	while (nbr != 0)
	{
		--length;
		result[length] = absolute_value(nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (result);
}
