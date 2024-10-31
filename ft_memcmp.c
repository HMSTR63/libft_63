/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammal <sojammal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:04:30 by sojammal          #+#    #+#             */
/*   Updated: 2024/10/30 15:30:11 by sojammal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *ts1;
    unsigned char   *ts2;
    size_t          i;

    ts1 = (unsigned char *)s1;
    ts2 = (unsigned char *)s2;
    i = 0;
    
    while (i < n)
    {
        if (ts1[i] != ts2[i])
        {
            return ((unsigned char)ts1[i] - (unsigned char)ts2[i]);
        }
        i++;
    }
    return (0);
}

// #include <string.h>

// int main()
// {
//     unsigned char s1[] = "\200";
//     unsigned char s2[] = "\0";

//     printf("{%d}\n", ft_memcmp(s1, s2, 2));
//     printf("{%d}\n", memcmp(s1, s2, 2));
// }