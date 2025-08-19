/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:12:09 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/03 22:25:20 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	if (!dest || !src)
		return (0);
	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (n == 0)
		return (src_len);
	if (n <= dst_len)
		return (n + src_len);
	i = dst_len;
	j = 0;
	while (src[j] != '\0' && (i + 1) < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dst_len + src_len);
}

// int main() {

//     char dest1[20] = "Hello, ";
//     const char *src1 = "World!";
//     size_t result1 = ft_strlcat(dest1, src1, sizeof(dest1));
//     printf("Test 1:\n");
//     printf("Resulting String: %s\n", dest1);
//     printf("Length of src: %zu\n\n", result1);

//     char dest2[10] = "Hello, ";
//     const char *src2 = "World!";
//     size_t result2 = ft_strlcat(dest2, src2, 7);
//     printf("Test 2:\n");
//     printf("Resulting String: %s\n", dest2);
//     printf("Length of src: %zu\n\n", result2);

//     char dest3[20] = "Hello, ";
//     const char *src3 = "World!";
//     size_t result3 = ft_strlcat(dest3, src3, 0);
//     printf("Test 3:\n");
//     printf("Resulting String: %s\n", dest3);
//     printf("Length of src: %zu\n\n", result3);

//     char dest4[10] = "";
//     const char *src4 = "a";
//     size_t result4 = ft_strlcat(dest4, src4, sizeof(dest4));
//     printf("Test 4:\n");
//     printf("Resulting String: '%s'\n", dest4);
//     printf("Length of src: %zu\n\n", result4);

//     char dest5[20] = "Hello, ";
//     const char *src5 = NULL;
//     size_t result5 = ft_strlcat(dest5, src5, sizeof(dest5));
//     printf("Test 5:\n");
//     printf("Resulting String: '%s'\n", dest5);
//     printf("Length of src: %zu\n\n", result5);

//     char *dest6 = NULL;
//     const char *src6 = "World!";
//     size_t result6 = ft_strlcat(dest6, src6, sizeof(dest6));
//     printf("Test 6:\n");
//     printf("Length of src: %zu\n\n", result6);

//     return (0);
// }
