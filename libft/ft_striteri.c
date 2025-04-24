/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:47:41 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/24 16:00:18 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

//Esta funcion me permite cambiar un str a artir de una funcion

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
//PARA PROBAR:

void to_uppercase(unsigned int i, char *c)
{
    (void)i; // esto es para que ignora la i (no lo necesito aquí)
    *c = ft_toupper(*c);
}

int main(void)
{
    char str[] = "Hola Mundo!";
    ft_striteri(str, to_uppercase);
    printf("Resultado: %s\n", str);
    return 0;
}*/
