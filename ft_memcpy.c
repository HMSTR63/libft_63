/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammal <sojammal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:12:13 by sojammal          #+#    #+#             */
/*   Updated: 2024/10/30 13:56:47 by sojammal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*td;
	unsigned char	*ts;

	td = (unsigned char *) dst;
	ts = (unsigned char *) src;
	
	if (!dst && !src)
	{
		return (NULL);
	}
	while (n > 0)
	{
		*td++ = *ts++;
		n--;
	}
	return (dst);
}
// #include <string.h>

// int main() {
//     char src[] = "abcde";
//     char src1[] = "abcde";

//     printf("Before ft_memcpy:\n");
//     printf("Source: %s\n", src);
//     printf("Destination: %s\n", src);


//     memcpy(src + 2, src, 3);
//     printf("ORIGINA :\n");
//     printf("Source: %s\n", src);
//     printf("Destination: %s\n", src);

//     ft_memcpy(src1 + 2, src1, 3);

//     printf("MINE  memcpy:\n");
//     printf("Source: %s\n", src1);
//     printf("Destination: %s\n", src1);
//     return 0;
// }
