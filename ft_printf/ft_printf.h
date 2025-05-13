/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:53:21 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/05/13 19:45:56 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>

int ft_printf(char const *str, ...);
int	ft_putchar(int str);
int	ft_putstr(char *str);
int ft_unsigned_write(unsigned int n);
int	ft_putnbr(int str);
int	ft_putnbr_base(unsigned long);
int	ft_hexa_min(unsigned int n);
int	ft_hexa_max(unsigned int n);

#endif
