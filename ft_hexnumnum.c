/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexnumnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fal-awla <fal-awla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:32:23 by fal-awla          #+#    #+#             */
/*   Updated: 2023/10/31 18:29:09 by fal-awla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexnumnum(unsigned long i)
{
	int		k;
	char	*s;

	s = "0123456789abcdef";
	if (i < 16)
		return (ft_putchar(s[i]));
	else
	{
		k = ft_hexnumnum(i / 16);
		return (k + ft_hexnumnum(i % 16));
	}
}
