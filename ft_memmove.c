/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:36:51 by myukang           #+#    #+#             */
/*   Updated: 2022/03/07 17:40:37 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dst, void	*src, size_t len)
{
	unsigned long	i;
	char			*d;
	char			*s;

	i = 0;
	if (dst == src)
	{
		return (dst);
	}
	d = dst;
	s = src;
	while (i < len)
	{
		*(d++) = *(s++);
		i++;
	}
	return (dst);
}
