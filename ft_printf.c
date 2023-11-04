/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fal-awla <fal-awla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:01:17 by fal-awla          #+#    #+#             */
/*   Updated: 2023/11/04 14:27:04 by fal-awla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_specifier(va_list ap, char format, int j)
{
	if (format == 'c')
		j = ft_putchar((va_arg(ap, int)));
	else if (format == 's')
		j = ft_str((va_arg(ap, char *)));
	else if (format == 'd' || format == 'i')
		j = ft_num(va_arg(ap, int));
	else if (format == 'x')
		j = ft_hexnumnum((long)va_arg(ap, unsigned int));
	else if (format == 'X')
		j = ft_hexnum((long)va_arg(ap, unsigned int));
	else if (format == '%')
		j = ft_putchar('%');
	else if (format == 'p')
		j = ft_ptr(va_arg(ap, void *));
	else if (format == 'u')
		j = ft_unsingednum(va_arg(ap, unsigned int));
	else
		ft_putchar(format);
	return (j);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i] != '\0')
		{
			j += ft_specifier(ap, format[i + 1], j);
			i++;
		}
		else
			j += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (j);
}



int main ()
{
	int x =42;
	ft_printf("%d\t%c\t%s\n%X\n%x\n%p\n%u",987654321,'s',"Hello World",42,42,&x,4567);
}