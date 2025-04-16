/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:15:24 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/16 19:58:25 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void	*dest, const void	*src, size_t	n)
{
	char		*ptr1;
	const char	*ptr2;

	ptr1 = (char *)dest;
	ptr2 = (const char *)src[i];
	if (ptr1 == ptr2 || n == 0)
		return (dest);
	if (ptr1 > ptr2)
	{
		ptr1 = ptr1 + n;
		ptr2 = ptr2 + n;
		while (n--)
			*(--ptr1) = *(--ptr2);
	}
	else
	{
		while (n--)
			*(ptr1++) = *(ptr2++);
	}
	return (dest);
}
/*
int	main(void)
{
	char	mensaje[] = "ABCDEF";
	char	mensaje2[] = "ABCDEF";
	size_t	n = 4;

	ft_memmove(mensaje + 2, mensaje2, n);
	printf("%s\n", mensaje);
	memmove(mensaje2 + 2, mensaje2, n);
	printf("%s\n", mensaje2);
	return (0);
}*/
