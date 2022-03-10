/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:51:12 by myukang           #+#    #+#             */
/*   Updated: 2022/03/10 18:48:15 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*p;

	p = 0;
	while (*s)
	{
		if (*s == (char)c)
		{
			p = (char *)s;
			break;
		}
		s++;
	}
	return (p);
}
