/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:37:04 by myukang           #+#    #+#             */
/*   Updated: 2022/03/11 17:01:33 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cur;
	t_list	*start;
	t_list	*next;

	if (!lst || !f || !del)
		return (0);
	cur = ft_lstnew(lst->content);
	if (!cur)
		return (0);
	start = cur;
	next = 0;
	while (lst != 0)
	{
		if (lst->next != 0)
			next = ft_lstnew(lst->next->content);
		else
			next = 0;
		cur->next = next;
		cur->content = f(lst->content);
		cur = cur->next;
		lst = lst->next;
	}
	return (start);
}
