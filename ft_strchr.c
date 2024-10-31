/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammal <sojammal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:16:21 by sojammal          #+#    #+#             */
/*   Updated: 2024/10/31 13:01:02 by sojammal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
   unsigned int i;
   char         u_c;
   
   i = 0;
   u_c = (char)c;
   while (s[i])
   {
        if (s[i] == u_c)
        {
            return ((char *) &s[i]);
        }
        i++;
   }
   return (NULL);
}

// #include <string.h>
// int main()
// {
//     char s[] = "HMSTR";
//     printf("{%s}\n", ft_strchr(s, 'H'));
// }