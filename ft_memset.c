/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammal <sojammal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:03:36 by sojammal          #+#    #+#             */
/*   Updated: 2024/10/31 18:14:24 by sojammal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
	unsigned char *tmp;
	size_t i;

	tmp = (unsigned char *) b;
	i = 0;

	while (i < len)
	{
		tmp[i] = (unsigned char) c;
		// tmp++;
		i++;
	}
	return (b);
}

// #include <limits.h>

// int main()
// {
// 	int c = INT_MAX;
// 	ft_memset(&c, 0, 4);
// 	ft_memset(&c, 5, 2);
// 	ft_memset(&c, 57, 1);
// 	ft_memset(&c, 255, 4);
// 	ft_memset(&c, 250, 2);
// 	ft_memset(&c, 199, 1);
// 	printf("%d\n", c);
// }