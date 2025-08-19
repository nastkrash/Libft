/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:09:52 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/03 15:35:26 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void	print_content(void *content)
// {
// 	printf("%d\n", *(int *)content);
// }

// int	main(void)
// {
// 	t_list *list = NULL;
//
// 	int *num1 = malloc(sizeof(int));
// 	int *num2 = malloc(sizeof(int));
// 	int *num3 = malloc(sizeof(int));
//
// 	*num1 = 10;
// 	*num2 = 20;
// 	*num3 = 30;
//
// 	t_list *node1 = ft_lstnew(num1);
// 	t_list *node2 = ft_lstnew(num2);
// 	t_list *node3 = ft_lstnew(num3);
//
// 	node1->next = node2;
// 	node2->next = node3;
//
// 	list = node1;
//
// 	ft_lstiter(list, print_content);
//
// 	return (0);
// }