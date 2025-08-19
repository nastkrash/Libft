/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:55:41 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/02 22:33:41 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dest;

	if (src == NULL)
	{
		return (NULL);
	}
	i = 0;
	dest = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// int	main(void)
// {
// 	const char	*original = "Hello, World!";
// 	char		*duplicate;
//
// 	duplicate = ft_strdup(original);
// 	if (duplicate == NULL)
// 	{
// 		printf("Memory allocation failed!\n");
// 		return (1);
// 	}
// 	printf("Original: %s\n", original);
// 	printf("Duplicate: %s\n", duplicate);
// 	return (0);
// }
