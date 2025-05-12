/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:53:21 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/05/12 15:53:23 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"

int ft_printf(char const *str, ...);
int	ft_putchar(char str);
int	ft_putstr(char *str);
int	ft_putnbr(int str);

#endif
