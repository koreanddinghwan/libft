/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:36:51 by myukang           #+#    #+#             */
/*   Updated: 2022/03/09 13:56:31 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	char			*d;
	char			*s;

	i = 0;
	if (dst == src || len == 0)
		return (dst);
	d = (char *)dst;
	s = (char *)src;
	while (i < len)
	{
		*(d++) = *(s++);
		i++;
	}
	return (dst);
}
