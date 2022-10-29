/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:16:01 by zael-wad          #+#    #+#             */
/*   Updated: 2022/10/29 23:39:33 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void				*ft_memmove(void *s1, const void *s2, size_t n);
void				*ft_memset(void *st, int arg, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
int					ft_isalpha(int arg);
int					ft_isascii(int arg);
int					ft_isdigit(int arg);
int					ft_atoi(const char *at);
int					ft_isalnum(int ag);
char				*ft_strchr(const char *str, int c);
int					ft_isprint(int ar);
void				*ft_calloc(size_t ntimes, size_t size);
void				ft_bzero(void *s, size_t n);
void				*ft_memchr(const void *str, int c, size_t n);
int					ft_memcmp(const void *str1, const void *str2, size_t n);
size_t				ft_strlcat(char *dest, char *src, size_t destsize);
char				*ft_strnstr(const char *find, const char *tofind, size_t n);
int					ft_strncmp(const char *str1, const char *str2, size_t size);
void				*ft_memcpy(void *dest, const void *src, size_t n);
size_t				ft_strlen(const char *str);
char				**ft_split(char const *st, char c);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
char				*ft_strnstr(const char *find, const char *tofind, size_t n);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_strjoin(char const *s1, char const *s2);
int					ft_toupper(int arg);
char				*ft_strdup(const char *source);
t_list				*ft_lstnew(void *content);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strrchr(const char *str, int arg);
char				*ft_substr(char const *s, unsigned int start, size_t lenth);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
int					ft_tolower(int arg);
char				*ft_itoa(int nbr);
void				ft_putstr_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putchar_fd(char c, int fd);
char				**ft_allocat(char *str1, char dl);

#endif