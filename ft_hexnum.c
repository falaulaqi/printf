/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fal-awla <fal-awla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:34:13 by fal-awla          #+#    #+#             */
/*   Updated: 2023/10/31 18:20:19 by fal-awla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexnum(unsigned long i)
{
	int		k;
	char	*s;

	s = "0123456789ABCDEF";
	if (i < 16)
		return (ft_putchar(s[i]));
	else
	{
		k = ft_hexnum(i / 16);
		return (k + ft_hexnum(i % 16));
	}
}
