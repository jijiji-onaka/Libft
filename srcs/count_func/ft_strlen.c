/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 22:06:26 by tjinichi          #+#    #+#             */
/*   Updated: 2020/12/11 21:31:10 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/count_func.h"

size_t	ft_strlen(const char *str)
{
	size_t i;

	if (!str)
		return (INT_MIN);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
