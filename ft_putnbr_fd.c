/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:10:25 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/03 15:11:13 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (fd < 0)
		return ;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		c = n + '0';
		write(fd, &c, 1);
	}
}
// int main(void)
// {
//     ft_putnbr_fd(42, 1);
//     write(1, "\n", 1);

//     ft_putnbr_fd(0, 1);
//     write(1, "\n", 1);

//     ft_putnbr_fd(-42, 1);
//     write(1, "\n", 1);

//     ft_putnbr_fd(-2147483648, 1);
//     write(1, "\n", 1);

//     ft_putnbr_fd(2147483647, 1);
//     write(1, "\n", 1);

//     ft_putnbr_fd(123, -1);

//     return 0;
// }