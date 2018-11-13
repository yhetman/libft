/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 17:39:33 by yhetman           #+#    #+#             */
/*   Updated: 2018/10/24 17:50:31 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define BUFF_SIZE 1

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include "get_next_line.h"

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_color
{
	unsigned char	r;
	unsigned char	g;
	unsigned char	b;
}					t_color;

int					ft_display(char *argv);
int					ft_rgb_to_int(t_color color);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void(*f)(t_list *elem));
void				ft_lstdel(t_list **alst, void(*del)(void*, size_t));
void				ft_lstdelone(t_list **alst, void(*del)(void *, size_t));
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstsort(t_list *lst, int (*cmp)(int, int));
void				ft_putchar(char c);
void				ft_putstr(const char *str);
void				ft_putendl(const char *s);
void				ft_putnbr(int n);
void				ft_memdel(void **ap);
void				ft_strdel(char **as);
char				*ft_strnew(size_t size);
void				*ft_memalloc(size_t size);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
int					ft_strequ(const char *s1, const char *s2);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
char				*ft_strjoin(char const *s1, char const *s2);
char				**ft_strsplit(char const *s, char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(const char *s, int fd);
void				ft_putendl_fd(const char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
char				*ft_itoa(int n);
int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
size_t				ft_strlen(const char *str);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strstr(const char *str, const char *to_find);
char				*ft_strnstr(const char *str, const char *to_find, size_t n);
char				*ft_strdup(const char *src);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *str, int ch);
char				*ft_strcat(char *dest, const char *srce);
char				*ft_strncat(char *restrict str1,
					const char *restrict str2, size_t n);
size_t				ft_strlcat(char *restrict dest, const char *restrict srce,
					size_t size);
void				*ft_memchr(const void *arr, int c, size_t n);
int					ft_memcmp(const void *str1, const void *str2, size_t n);
void				*ft_memcpy(void *str1, const void *str2, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *destination,
					const void *source, size_t n);
void				*ft_memset(void *b, int c, size_t n);
int					ft_isalpha(int ch);
int					ft_isprint(int ch);
int					ft_isdigit(int ch);
int					ft_isascii(int ch);
int					ft_isalnum(int ch);
int					ft_tolower(int ch);
int					ft_toupper(int ch);
int					*ft_range(int first, int last);
void				ft_swap(int *a, int *b);
void				ft_strerr(char *str);

#endif
