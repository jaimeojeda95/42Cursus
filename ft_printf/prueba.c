#include <stdio.h>
#include <unistd.h>

int	ft_putchar(char str)
{
	if (!str)
		return (0);
	write(1, &str, 1);
	return (1);
}

int	ft_putnbr(int str)
{
	int	i;
	
	i = 0;
	if (str == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	if (str < 0)
	{
		i += write (1, "-", 1);
		str = (-1 * str);
	}
	if (str >= 10)
		i += ft_putnbr(str / 10);
	i += ft_putchar((str % 10) + '0');
	return (i);
}

int	main(void)
{
	int	str = 'c';
	printf(" printf original: %c\n", printf("c"));
	printf(" mi versión ft_printf: %c\n", ft_putchar(str));
	return (0);
}