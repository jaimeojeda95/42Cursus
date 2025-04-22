#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(len + 1);
	if (str == NULL)
	return (NULL);
	while (i < len && s[start] != '\0')
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char const	s[] = "hola Coddy";
	unsigned int	start = 4;
	size_t	len    = 4;
    
	printf ("resultado con start: %d y len: %zu --> %s",
start, len, ft_substr(s, start, len));
	return (0);
}*/
