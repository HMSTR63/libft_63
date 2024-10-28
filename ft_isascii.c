/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammal <sojammal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:58:31 by sojammal          #+#    #+#             */
/*   Updated: 2024/10/25 19:00:00 by sojammal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c > 0 && 127 > c);
}
/*
int main()
{
    char test_ascii = 'a';
    int result = ft_isascii(test_ascii);
    printf("%d\n", result);
}*/
