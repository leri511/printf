/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsievier <hsievier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:43:51 by hsievier          #+#    #+#             */
/*   Updated: 2023/06/02 15:46:08 by hsievier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int nb);
int		ft_putunbr(unsigned int nb);
int		ft_hexlow(unsigned int nb);
int		ft_hexupp(unsigned int nb);
int		ft_pointer(unsigned long ptr);

#	endif