/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:50:55 by myukang           #+#    #+#             */
/*   Updated: 2022/03/10 17:56:49 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;

	substr = ft_calloc(len + 1, sizeof(char));
	if (!substr)
		return (0);
	if (!s)
		return (0);
	if (ft_strlen((char *)s) <= (size_t)start)
		return (ft_strdup(0));
	ft_strlcpy(substr, (char *)(s + start), len + 1);
	return (substr);
}
