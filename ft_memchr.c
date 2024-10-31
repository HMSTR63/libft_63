/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammal <sojammal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:45:38 by sojammal          #+#    #+#             */
/*   Updated: 2024/10/30 16:13:51 by sojammal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *tmp_s;
    size_t          i;

    tmp_s = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (tmp_s[i] == (unsigned char)c)
        {
            return ((void *)tmp_s);
        }
        i++;
    }
    return (NULL);
}

// int main()
// {
//     char str[] = "HMSTR";
//     char *res;

//     res = ft_memchr(str, 'j', 5);
//     if (res != NULL)
//         printf("Found '%c'\n", *res);
//     else
//         printf("Character not found\n");
// }