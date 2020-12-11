/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   re_strjoinch.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 04:21:41 by tjinichi          #+#    #+#             */
/*   Updated: 2020/12/12 04:28:11 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/string_func.h"

char	*re_strjoinch(char **s, char c)
{
	char	*res;
	size_t	i;

	res = malloc(ft_strlen(*s) + 1 + 1);
	if (!res)
		return (NULL);
	i = 0;
	while ((*s)[i])
	{
		res[i] = (*s)[i];
		i++;
	}
	res[i++] = c;
	res[i] = '\0';
	free(*s);
	*s = NULL;
	return (res);
}
