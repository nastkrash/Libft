/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:09:31 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/03 16:13:47 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_number_length(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = get_number_length(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	else if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

// int	main(void)
// {
// 	int test_numbers[] = {0, 42, -42, 2147483647, -2147483648, 123456789,
// 		-987654321};

// 	for (size_t i = 0; i < sizeof(test_numbers) / sizeof(test_numbers[0]); i++)
// 	{
// 		char *result = ft_itoa(test_numbers[i]);
// 		if (result)
// 		{
// 			printf("ft_itoa(%d) = %s\n", test_numbers[i], result);
// 			free(result);
// 		}
// 		else
// 		{
// 			printf("ft_itoa(%d) failed to allocate memory.\n", test_numbers[i]);
// 		}
// 	}

// 	return (0);
// }