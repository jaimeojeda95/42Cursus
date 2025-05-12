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

//para %u


int	main(void)
{
	unsigned int	str = -2025;
	printf("%u\n", printf("%u\n", str));
	// printf(" printf original: %u\n", printf("-5426"));
	printf(" mi versión ft_printf: %u\n", ft_putnbr(str));
	return (0);
}