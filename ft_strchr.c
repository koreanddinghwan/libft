/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:51:12 by myukang           #+#    #+#             */
/*   Updated: 2022/03/16 18:18:56 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	size_t	size;
	size_t	i;

	p = 0;
	i = 0;
	size = ft_strlen((char *)s);
	while (i < size)
	{
		if (s[i] == (unsigned char)c)
		{
			p = (char *)(s + i);
			return (p);
		}
		i++;
	}
	if ((i == size) && (unsigned char)c == 0)
		return ((char *)(s + i));
	return (p);
}

#include <string.h>
#include <stdio.h>

int main()
{
	char *str = "test";

	printf("%s\n", strchr(str, 't' + 256));
	printf("%s\n", ft_strchr(str, 't' + 256));

}
