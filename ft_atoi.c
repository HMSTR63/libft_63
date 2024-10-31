/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammal <sojammal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:03:11 by sojammal          #+#    #+#             */
/*   Updated: 2024/10/31 22:32:46 by sojammal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_atoi(const char *str)
{
    int    res;
    int    i;
    int     sign;

    res = 0;
    i = 0;
    sign = 1;
    while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
    {
        i++;
    }
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    while (str[i] && ft_isdigit(str[i]))
    {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    res *= sign;
    return (res);
}

// int main()
// {
//     printf("ft_atoi: %d\n", ft_atoi("2147483647"));
//     printf("atoi:    %d\n\n", atoi("2147483647")); // Expected: 2147483647 (INT_MAX)

//     printf("ft_atoi: %d\n", ft_atoi("-2147483648"));
//     printf("atoi:    %d\n\n", atoi("-2147483648"));  // Expected: -2147483648 (INT_MIN)
    
//     printf("ft_atoi: %d\n", ft_atoi("2147483648"));
//     printf("atoi:    %d\n\n", atoi("2147483648"));  // Expected: 2147483647 (INT_MAX)
    
//     printf("ft_atoi: %d\n", ft_atoi("-2147483649"));    // Expected: -2147483648 (INT_MIN)
//     printf("atoi:    %d\n\n", atoi("-2147483649"));

//     printf("ft_atoi: %d\n", ft_atoi("99999999999999999999"));
//     printf("atoi:    %d\n", atoi("99999999999999999999")); // Expected: -1

// }