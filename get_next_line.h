/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:29:25 by rboutaik          #+#    #+#             */
/*   Updated: 2024/02/12 00:48:21 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 24
# endif

size_t	ft_strlen(const char *c);
char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_getstr(char *s);
char	*ft_getsecond(char *s);
char	*ft_allocat2(int size, char **s1, char **s2);
char	*ft_allocat(char **str, int s);
int		f(char **str, char **buffer, int size);

#endif
