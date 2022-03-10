/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:39:57 by myukang           #+#    #+#             */
/*   Updated: 2022/03/10 14:35:55 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*p;
	char	*h;

	if (ft_strlen((char *)needle) == 0)
		return ((char *)haystack);
	i = 0;
	p = 0;
	h = (char *)haystack;
	while (i < len && *h)
	{
		if (*h == *needle)
		{
			if (ft_strncmp((char *)h, (char *)needle, ft_strlen((char *)needle)))
			{
				p = h;
				break;
			}
		}
		h++;
		i++;
	}
	return (p);
}
