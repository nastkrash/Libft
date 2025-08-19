/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:10:00 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/03 15:35:11 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*elem;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		elem = ft_lstnew(f(lst->content));
		if (!elem)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, elem);
		lst = lst->next;
	}
	return (new_lst);
}

// void	del(void *content)
// {
// 	free(content);
// }

// int main()
// {
//
//     t_list *list = NULL;
//     t_list *node1 = ft_lstnew(malloc(sizeof(int)));
//     t_list *node2 = ft_lstnew(malloc(sizeof(int)));
//     t_list *node3 = ft_lstnew(malloc(sizeof(int)));
//
//     *(int *)(node1->content) = 1;
//     *(int *)(node2->content) = 2;
//     *(int *)(node3->content) = 3;
//
//     node1->next = node2;
//     node2->next = node3;
//
//     t_list *new_list = ft_lstmap(node1, increment, del);
//
//     t_list *current = new_list;
//     while (current)
//     {
//         printf("%d\n", *(int *)(current->content));
//         current = current->next;
//     }
//
//     ft_lstclear(&list, del);
//     ft_lstclear(&new_list, del);
//
//     return (0);
// }