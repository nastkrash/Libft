/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:09:08 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/03 16:01:10 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
// int main() {

//     t_list *list = NULL;

//     t_list *node1 = ft_lstnew("Node 1");
//     t_list *node2 = ft_lstnew("Node 2");
//     t_list *node3 = ft_lstnew("Node 3");

//     ft_lstadd_front(&list, node1);
//     ft_lstadd_front(&list, node2);
//     ft_lstadd_front(&list, node3);

//     int size = ft_lstsize(list);
//     printf("The size of the list is: %d\n", size);
//     return (0);
// }