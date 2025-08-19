/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:10:18 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/03 15:18:50 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}

// int main(void)
// {
//     char c = 'A';

//     printf("Test case 1: Valid character to stdout\n");
//     ft_putchar_fd(c, 1);
//     write(1, "\n", 1);

//     printf("Test case 2: Invalid file descriptor\n");
//     ft_putchar_fd(c, -1);

//     return (0);
// }