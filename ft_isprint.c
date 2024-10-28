/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammal <sojammal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:00:22 by sojammal          #+#    #+#             */
/*   Updated: 2024/10/25 19:02:30 by sojammal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && 126 >= c);
}
/*
int main()
{
    char test_print = '\\';
    int result = ft_isprint(test_print);
    printf("%d\n", result);
    return (0);
}*/
