#include "get_next_line.h"

int	main(void)
{
	ssize_t	bytes_read;
	int		fd;
	char	buffer[BUFFER_SIZE];
	
	fd = open("prueba.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("Error al abrir el archivo");
		return(1);
	}
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (bytes_read == -1)
	{
		perror("Error al leer el archivo");
		close(fd);
		return (1);
	}
	buffer[bytes_read] = '\0';
	printf("%s\n", buffer);
	close(fd);
	return (0);
}