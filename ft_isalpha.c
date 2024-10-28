/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammal <sojammal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:28:46 by sojammal          #+#    #+#             */
/*   Updated: 2024/10/25 13:00:19 by sojammal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c > 64 && 91 > c) || (c > 96 && 123 > c));
}
/*
int main()
{
    char test_char = '5';
    int result = ft_isalpha(test_char);
    printf("%d\n", result);
}*/
