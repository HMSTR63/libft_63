/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammal <sojammal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:40:46 by sojammal          #+#    #+#             */
/*   Updated: 2024/10/29 23:10:11 by sojammal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *t1;
	unsigned char *t2;
	size_t         i;

	i = 0;
	t1 = (unsigned char *) dst;
	t2 = (unsigned char *) src;
	if (!dst && !src)
	{
		return (NULL);
	}
	if (t1 > t2)
	{
		while (len-- > 0)
		{
			t1[len] = t2[len];
		}
	}
	else
	{
		while (i < len)
		{
			t1[i] = t2[i];
			i++;
		}
	}
	return (dst);
}

// #include <string.h>

// int main() {
//     char src[] = "abcde";
//     char src1[] = "abcde";

//     printf("Before ft_memmove:\n");
//     printf("Source: %s\n", src);
//     printf("Destination: %s\n", src);

//     ft_memcpy(src + 2, src, 3);

//     printf("After ft_memmove:\n");
//     printf("Source: %s\n", src);
//     printf("Destination: %s\n", src);

//     ft_memmove(src1 + 2, src1, 3);

//     printf("After memmove:\n");
//     printf("Source: %s\n", src1);
//     printf("Destination: %s\n", src1);
// 	return 0;
// }
