/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:53:49 by myukang           #+#    #+#             */
/*   Updated: 2022/03/09 13:48:40 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_cat(char *dest, char *src, size_t s, size_t dsize)
{
	int	c;

	c = 0;
	while ((src[c] && (dsize < s - 1)))
		dest[dsize++] = src[c++];
	dest[dsize] = '\0';
}

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t		i;
	size_t		len_dest;
	size_t		len_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = 0;
	if ((size - 1 > len_dest) && (size != 0))
		ft_cat(dest, src, size, len_dest);
	if (size <= len_dest)
		return (len_src + size);
	else
		return (len_dest + len_src);
}
