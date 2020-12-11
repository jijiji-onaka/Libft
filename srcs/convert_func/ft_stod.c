/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 02:31:48 by tjinichi          #+#    #+#             */
/*   Updated: 2020/12/11 21:31:38 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/convert_func.h"

static int		is_float(char *s)
{
	if (*s == '-')
		s++;
	while (ft_isdigit(*s))
		s++;
	if (*s == '.')
	{
		s++;
		while (ft_isdigit(*s))
			s++;
	}
	if (*s)
		return (0);
	return (1);
}

static double	solve(char *a)
{
	int		sign;
	double	r;
	double	frac;

	sign = 1;
	r = 0;
	frac = 1;
	while (ft_isspace(*a))
		a++;
	if (*a == '+' || *a == '-')
		if (*a++ == '-')
			sign *= -1;
	while (ft_isdigit(*a))
		r = r * 10 + sign * (*a++ - '0');
	if (*a == '.')
	{
		a++;
		while (ft_isdigit(*a))
		{
			r = r * 10 + sign * (*a++ - '0');
			frac /= 10;
		}
	}
	return (r * frac);
}

int				ft_stod(char *str, double *d)
{
	if (!is_float(str))
		return (0);
	*d = solve(str);
	return (1);
}
