/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:09:48 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/03 16:08:27 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (del)
		(*del)(lst->content);
	free(lst);
}
// static void del(void *content)
// {
//     free(content);
// }

// int main(void)
// {

//     t_list *node = ft_lstnew(malloc(sizeof(char) * 6));
//     if (!node)
//         return (1);
//     ft_strlcpy((char *)node->content, "Hello", 6);

//     ft_lstdelone(node, del);

//     return (0);
// }