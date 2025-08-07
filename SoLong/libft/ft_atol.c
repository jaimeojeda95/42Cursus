/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:50:02 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/07/29 20:29:16 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(const char *nptr)
{
	long	i;
	long	numero;
	int		signo_negativo;

	i = 0;
	numero = 0;
	signo_negativo = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signo_negativo = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (signo_negativo == 1 && (numero > (INT_MAX - (nptr[i] - '0')) / 10))
			return (2147483648L);
		if (signo_negativo == -1 && (numero > (2147483648L - (nptr[i] - '0')) / 10))
			return (-2147483649L); 
		numero = (numero * 10) + (nptr[i] - '0');
		i++;
	}
	return (numero * signo_negativo);
}
/*
int	main(void)
{
	char	mensaje[] = "   -+6585hola";
	char	msj2[] = "   -+6585hola";
	printf("lo que me da: %d\n", ft_atoi(mensaje));
	printf("esperado: %d\n", atoi(msj2));
	return (0);
}*/