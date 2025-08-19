/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 23:37:09 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/03 20:49:02 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int value, size_t num)
{
	unsigned char	*ptr;
	size_t			i;

	if (b == NULL)
		return (NULL);
	ptr = (unsigned char *)b;
	i = 0;
	while (i < num)
	{
		ptr[i] = (unsigned char)value;
		i++;
	}
	return (b);
}

// int main()
// {
//     char str[50] = "abcdefghjklmnopqrstuvwxyz";
//     printf("\nBefore ft_memset(): %s\n", str);
//     ft_memset(str + 13, '.', 8);
//     printf("After ft_memset():  %s", str);
//     return (0);
// }