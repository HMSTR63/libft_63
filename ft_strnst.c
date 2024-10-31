/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammal <sojammal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:39:59 by sojammal          #+#    #+#             */
/*   Updated: 2024/10/31 18:42:44 by sojammal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    if (needle[0] == '\0')
    {
        return ((char *) haystack);
    }
    i = 0;
    while (haystack[i] && i < len)
    {
        j = 0;
        while (haystack[i + j] == needle[j] && i + j < len)
        {
            if (needle[j + 1] == '\0')
            {
                return ((char *)haystack + i);
            }
            j++;
        }
        i++;
    }
    return (0);
}

// #include <string.h>
// int main()
// {
//     char *str1 = "NULL";
//     char *str2 = "";
    
//     printf("{%s}\n", ft_strnstr(str1, str2, 10));
//     char *str3 = NULL;
//     char *str4 = NULL;
//     printf("{%s}\n", strnstr(str3, str4, 10));
// }