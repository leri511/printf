/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsievier <hsievier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:46:15 by hsievier          #+#    #+#             */
/*   Updated: 2023/06/02 15:56:02 by hsievier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conv(char c, va_list arg)
{
	if (c == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (c == 'p')
		return (ft_pointer(va_arg(arg, unsigned long)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	else if (c == 'u')
		return (ft_putunbr(va_arg(arg, unsigned int)));
	else if (c == 'x')
		return (ft_hexlow(va_arg(arg, int)));
	else if (c == 'X')
		return (ft_hexupp(va_arg(arg, int)));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;
	int		count;

	va_start(arg, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
			count += ft_conv(format[++i], arg);
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(arg);
	return (count);
}
