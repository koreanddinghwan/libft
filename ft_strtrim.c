/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:34:59 by myukang           #+#    #+#             */
/*   Updated: 2022/03/11 17:30:25 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ds;
	char	*result;

	ds = ft_strdup((char *)s1);
	result = ds;
	while (ds)
	{
		if (ft_strchr(set, *ds))
			ds = ft_memmove(ds, ds + 1, ft_strlen(ds));
		if (*ds == 0)
			break ;
		ds++;
	}
	return (result);
}
