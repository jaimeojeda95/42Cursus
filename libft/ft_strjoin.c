#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char	*str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str3;

	str3 = malloc(ft_strlen(s1) + ft_strlen(s2));
	if (str3 == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str3[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		str3[i + j] = s2[j];
		j++;
	}
	str3[i + j] = '\0';
	return (str3);
}

int	main(void)
{
	const char	str1[] = "hola";
	const char	str2[] = "Coddy";

	printf ("La nueva cadena es: %s\n", ft_strjoin(str1, str2));
}
