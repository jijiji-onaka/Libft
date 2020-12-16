/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_func.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 20:46:17 by tjinichi          #+#    #+#             */
/*   Updated: 2020/12/17 06:33:03 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_FUNC_H
# define CONVERT_FUNC_H

# include "libft.h"

int		ft_atoi(const char *str);
char	*ft_itoa(int n);
int		ft_stod(char *str, double *d);
int		ft_stoi(char *str, int *i);
int		ft_stov(char *s, t_p3 *p);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*skip_space(char *s);
char	*str_tolower(char *s);

#endif
