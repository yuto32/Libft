/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimomu <yshimomu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:17:10 by yshimomu          #+#    #+#             */
/*   Updated: 2022/11/06 12:17:12 by yshimomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*a;

	a = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			a = (char *)s;
		}
		s++;
	}
	if (*s == '\0' && (char)c == '\0')
		return ((char *)s);
	return (a);
}
