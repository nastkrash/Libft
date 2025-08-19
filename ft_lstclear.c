/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:09:45 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/03 16:12:36 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}
// void	del(void *content)
// {
// 	free(content);
// }
// int	main(void)
// {
// 	t_list *list = NULL;

// 	t_list *node1 = ft_lstnew(malloc(sizeof(int)));
// 	t_list *node2 = ft_lstnew(malloc(sizeof(int)));
// 	t_list *node3 = ft_lstnew(malloc(sizeof(int)));

// 	*(int *)(node1->content) = 1;
// 	*(int *)(node2->content) = 2;
// 	*(int *)(node3->content) = 3;

// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;

// 	list = node1;

// 	ft_lstclear(&list, del);

// 	if (list == NULL)
// 	{
// 		printf("List cleared successfully!\n");
// 	}
// 	else
// 	{
// 		printf("List was not cleared.\n");
// 	}
// 	return (0);
// }