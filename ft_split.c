/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:06:21 by myukang           #+#    #+#             */
/*   Updated: 2022/03/11 17:27:22 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_calstr(char *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && (*str == c))
			str++;
		if (*str != 0)
		{
			count++;
			while (*str && (*str != c))
				str++;
		}
	}
	return (count);
}

static char	*ft_makestr(char *str, char c)
{
	int		i;
	char	*p;

	i = 0;
	while (str[i] && (str[i] != c))
		i++;
	p = ft_calloc(i + 1, sizeof(char));
	ft_strlcpy(p, str, i + 1);
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		p_index;

	p = ft_calloc(ft_calstr((char *)s, c), sizeof(char *));
	if (!p)
		return (0);
	p_index = 0;
	while (*s)
	{
		while (*s && (*s == c))
			s++;
		if (*s != 0)
		{
			p[p_index++] = ft_makestr((char *)s, c);
			while (*s && !(*s == c))
				s++;
		}
	}
	p[p_index] = 0;
	return (p);
}
