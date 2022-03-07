/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:37:02 by myukang           #+#    #+#             */
/*   Updated: 2022/03/07 17:29:52 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	unsigned long	i;
	char			*d;
	char			*s;

	i = 0;
	d = dst;
	s = src;
	while (i < n)
	{
		*(d++) = *(s++);
		i++;
	}
	return (dst);
}
