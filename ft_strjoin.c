/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:05:37 by myukang           #+#    #+#             */
/*   Updated: 2022/03/10 18:13:34 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	str_len;
	char	*joinstr;

	str_len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	joinstr = ft_calloc(str_len, sizeof(char));
	if (!joinstr)
		return (0);
	ft_strlcpy(joinstr + ft_strlcpy(joinstr, (char *)s1, str_len + 1), (char *)s2, str_len + 1);
	return (joinstr);
}