/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshvydka <dshvydka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:24:34 by dshvydka          #+#    #+#             */
/*   Updated: 2024/10/19 17:10:56 by dshvydka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// # include<stddef.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
// memory
void	*ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *s, int c, size_t count);
int		*ft_memcmp(void *s1, void *s2, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t count);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
// string
char	*ft_strchr(const char *str, int chr);
int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strnstr(char *haystack, char *needle, unsigned int size);
char	*ft_strrchr(const char *str, int chr);
size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t n);
size_t	ft_strlcpy(char *restrict dest, const char *restrict src, size_t n);
char	*ft_strdup(const char *s1);
void	*ft_calloc(size_t num, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif