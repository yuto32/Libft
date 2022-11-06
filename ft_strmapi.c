/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimomu <yshimomu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:16:13 by yshimomu          #+#    #+#             */
/*   Updated: 2022/11/06 12:16:15 by yshimomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	size_t	i;

	if (!s || !f)
		return (NULL);
	p = ft_strdup(s);
	if (!(p))
		return (NULL);
	i = 0;
	while (p[i])
	{
		p[i] = (*f)(i, p[i]);
		i++;
	}
	return (p);
}
