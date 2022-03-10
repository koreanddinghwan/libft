/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:30:29 by myukang           #+#    #+#             */
/*   Updated: 2022/03/10 16:32:17 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t			i;
	unsigned char*	uc1;
	unsigned char*	uc2;

	uc1 = (unsigned char*)s1;
	uc2 = (unsigned char*)s2;
	i = 0;
	while (i < n)
	{
		if ((uc1[i] == uc2[i]) && uc1[i] == '\0')
			return (0);
		if (uc1[i] != uc2[i])
			return (uc1[i] - uc2[i]);
		i++;
	}
	return (0);
}
