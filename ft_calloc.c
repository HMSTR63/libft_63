/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammal <sojammal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 22:34:23 by sojammal          #+#    #+#             */
/*   Updated: 2024/10/31 22:48:53 by sojammal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    unsigned char   *t;
    size_t          i;

    i = 0;
    t = malloc(count * size);
    if (!t)
    {
        return (NULL);
    }
    while (i < count * size)
    {
        t[i] = 0;
        i++;
    }
    return (t);
}

// int main()
// {
//     int *alloc;
//     int i;

//     i = 0;
//     alloc = ft_calloc(6, sizeof(int));
//     while (i < 6)
//     {
//         printf("{%d}\n", alloc[i]);
//         i++;
//     }
//     free(alloc);
//     return (0);
// }