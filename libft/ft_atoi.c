/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 20:05:10 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/16 20:24:02 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	signo_negativo;
	int	numero;

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
