/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:53:21 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/05/16 21:47:22 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char const *str, ...);
int	ft_putchar(int str);
int	ft_putstr(char *str);
int	ft_unsigned_write(unsigned int n);
int	ft_putnbr(int str);
int	ft_putnbr_base(unsigned long n);
int	ft_hexa_min(unsigned int n);
int	ft_hexa_max(unsigned int n);
int	ft_validate_ptr(void *ptr);
int	ft_printf_conditions(char format, va_list args);

#endif