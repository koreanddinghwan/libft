/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:37:04 by myukang           #+#    #+#             */
/*   Updated: 2022/03/12 14:59:31 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*start;
	t_list	*next;

	if (!lst || !f)
		return (0);
	start = 0;
	while (lst != 0)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&start, del);
			return (0);
		}
		next = lst->next;
		ft_lstdelone(lst, del);
		ft_lstadd_back(&start, new);
		lst = next;
	}
	return (start);
}
