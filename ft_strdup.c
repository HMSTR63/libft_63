/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammal <sojammal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:52:08 by sojammal          #+#    #+#             */
/*   Updated: 2024/11/01 13:02:01 by sojammal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    char    *dst;
    size_t  i;

    dst = (char *)malloc(ft_strlen(s1) + 1);
    if (!dst)
    {
        return (NULL);
    }
    
    i = 0;
    while (s1[i])
    {
        dst[i] = s1[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

// int main()
// {
//     const char *s1 = "HMSTR_HAMILTON";
//     char *dst = ft_strdup(s1);

//     printf("{%s}\n", dst);
//     free(dst);
// }