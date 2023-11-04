/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fal-awla <fal-awla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 11:22:44 by fal-awla          #+#    #+#             */
/*   Updated: 2023/10/31 18:39:30 by fal-awla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_str(char *s);
int	ft_num(int i);
int	ft_hexnumnum(unsigned long i);
int	ft_hexnum(unsigned long i);
int	ft_ptr(void *ptr);
int	ft_unsingednum(unsigned int i);

#endif