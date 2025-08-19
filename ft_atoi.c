/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:24:53 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/02 22:04:51 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	is_minus;
	int	i;

	if (str == NULL)
		return (0);
	num = 0;
	is_minus = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			is_minus = 1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	if (is_minus)
		return (-num);
	return (num);
}
// int	main(void)
// {
// 	const char *num_str = "   -12345abc";
// 	int num = ft_atoi(num_str);
// 	printf("Converted number: %d\n", num);
// 	return (0);
// }