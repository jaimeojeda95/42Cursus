/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 22:15:22 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/07/29 20:41:33 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>

/* typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list; */

int		ft_atoi(const char *nptr);
long	ft_atol(const char *nptr);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *str, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *str, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
void	ft_bzero(void	*str, size_t	n);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memchr(const void *str, int c, size_t n);
void	*ft_memcpy(void	*dest, const void	*src, size_t	n);
void	*ft_memmove(void	*dest, const void	*src, size_t	n);
void	*ft_memset(void	*str, int x, size_t n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char	*str);
size_t	ft_strlcat(char	*dest, const char	*src, size_t	size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_printf(char const *str, ...);
int		ft_putchar(int str);
int		ft_putstr(char *str);
int		ft_unsigned_write(unsigned int n);
int		ft_putnbr(int str);
int		ft_putnbr_base(unsigned long n);
int		ft_hexa_min(unsigned int n);
int		ft_hexa_max(unsigned int n);
int		ft_validate_ptr(void *ptr);
int		ft_printf_conditions(char format, va_list args);
char	*get_next_line(int fd);
char	*create_storage(int fd, char *storage, ssize_t *bytes_read);
char	*ft_separate_lines(char *storage);
char	*ft_strdup(const char *s);
char	*ft_strchr(const char *str, int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char	*str);

#endif