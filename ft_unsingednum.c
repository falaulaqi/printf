/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsingednum.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fal-awla <fal-awla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:41:01 by fal-awla          #+#    #+#             */
/*   Updated: 2023/10/31 18:24:24 by fal-awla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsingednum(unsigned int i)
{
	int	k;

	k = 0;
	if (i > 9)
	{
		k += ft_unsingednum(i / 10);
	}
	k += ft_putchar(i % 10 + '0');
	return (k);
}
