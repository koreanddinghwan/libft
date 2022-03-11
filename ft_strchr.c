/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:51:12 by myukang           #+#    #+#             */
/*   Updated: 2022/03/11 20:22:17 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	size_t	size;
	size_t	i;

	p = 0;
	i = 0;
	size = ft_strlen((char *)s);
	while (i < size)
	{
		if (s[i] == c)
		{
			p = (char *)(s + i);
			return (p);
		}
		i++;
	}
	if ((i == size) && c == 0)
		return (char *)(s + i);
	return (p);
}
