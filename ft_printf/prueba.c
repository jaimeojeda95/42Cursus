#include <stdio.h>
#include <unistd.h>

int	ft_putchar(char str)
{
	if (!str)
		return (0);
	write(1, &str, 1);
	return (1);
}
//para %d, &i
int	ft_putnbr(int n)
{
	int	i;
	
	i = 0;
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		i += write (1, "-", 1);
		n = (-1 * n);
	}
	if (n >= 10)
		i += ft_putnbr(n / 10);
	i += ft_putchar((n % 10) + '0');
	return (i);
}

//para %p
int	ft_putnbr_base(void	*ptr)
{
	char	*hex;
	int		i;

	hex = "0123456789ABCDEF";
	if (ptr == NULL)
		write(1, "(nil)", 5);
	if (ptr >= 16)
		i += ft_putnbr_base(ptr / 16);
	i += ft_putchar[hex % 16];
	return (i);
	
}


int	main(void)
{
	int	*str = 52;
	// printf("%u\n", printf("%u\n", str));
	printf(" printf original: %d\n", printf("%p", str));
	// int i = printf("%s\n", str);
	// printf("%d\n", i);
	
	// printf(" mi versión ft_printf: %d\n", ft_putnbr_base(str));
	return (0);
}