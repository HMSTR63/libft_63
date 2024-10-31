/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammal <sojammal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:14:15 by sojammal          #+#    #+#             */
/*   Updated: 2024/10/31 13:19:36 by sojammal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
   unsigned int i;
   char         u_c;
   char         *result;
   
   i = 0;
   u_c = (char)c;
   result = NULL; 
   while (s[i])
   {
        if (s[i] == u_c)
        {
            result = (char *) &s[i];
        }
        i++;
   }
   return (result);
}

// #include <string.h>
// int main()
// {
//     char s[] = "HMSTR";
//     printf("{%s}\n", strrchr(s, 'H'));
// }