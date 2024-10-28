/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammal <sojammal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:03:36 by sojammal          #+#    #+#             */
/*   Updated: 2024/10/28 12:03:59 by sojammal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
	unsigned char *tmp;
	size_t i;

	tmp = (unsigned char *) b;
	i = 0;

	while (i < len)
	{
		*tmp = (unsigned char) c;
		tmp++;
		i++;
	}
	return (b);
}
