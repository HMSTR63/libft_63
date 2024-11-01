/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammal <sojammal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 22:33:32 by sojammal          #+#    #+#             */
/*   Updated: 2024/11/02 00:17:16 by sojammal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
    char    *list;
    size_t  p1;
    size_t  p2;

    if (!s1 || !s2)
        return (NULL);
    p1 = ft_strlen(s1);    
    p2 = ft_strlen(s2);    
    list = malloc(p1 + p2 + 1);
    if (!list)
        return (NULL);
    ft_strlcpy(list, s1, p1 + 1);
    ft_strlcat(list, s2, p1 + p2 + 1);
    return (list);
}

// int main()
// {
//     char *list;

//     list = ft_strjoin("LEWISE,  ", "HAMILTON");
//     printf("{%s}\n", list);
//     free(list);
// }