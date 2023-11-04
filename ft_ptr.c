/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fal-awla <fal-awla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:35:37 by fal-awla          #+#    #+#             */
/*   Updated: 2023/10/31 18:17:08 by fal-awla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(void *ptr)
{
	int				i;
	unsigned long	k;

	i = 0;
	k = (unsigned long)ptr;
	i = ft_str("0x");
	i += ft_hexnumnum(k);
	return (i);
}
