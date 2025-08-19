/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:10:04 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/03 15:49:31 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
// int	main(void)
// {
// 	t_list *node = ft_lstnew("Hello, World!");
// 	printf("Node created successfully.\n");
// 	printf("Content: %s\n", (char *)node->content);
// 	printf("Next: %p\n", (void *)node->next);

// 	node = ft_lstnew(NULL);
// 	printf("Node created successfully.\n");
// 	printf("Node content: %p\n", node->content);
// 	printf("Node next: %p\n", node->next);

// 	return (0);
// }