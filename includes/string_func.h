/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_func.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 20:46:45 by tjinichi          #+#    #+#             */
/*   Updated: 2020/12/11 21:25:44 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_FUNC_H
# define STRING_FUNC_H

# include "libft.h"

int			check_strtail_num(char *s, char *tail);
char		**ft_split(char const *s, char c);
char		*ft_str3join(char *s1, char *s2, char *s3);
char		*ft_strchr(const char *s, int c);
int			ft_strcmp(char *p1, char *p2);
char		*ft_strdup(const char *s1);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strjoinch(char const *s, char c);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strrchr(const char *s, int c);
int			ft_strsort(char **str, int (*cmp_by)(char *, char *));
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*strjoin_num(char *s, long long num);

#endif
