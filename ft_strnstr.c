/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:39:57 by myukang           #+#    #+#             */
/*   Updated: 2022/03/09 16:46:19 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*(const char *haystack, const char *needle, size_t len)
{
/*여기서부터 다시. string안에서 string 찾는거임. 반복문 2개 써라.*/
	size_t	i;
	char	*p;
	char	*src;

	if (ft_strlen((char *)needle) == 0)
		return (haystack);
	i = 0;
	p = 0;
	while (i < len &&)
	{
		
		i++;
	}
	return (p);
}
