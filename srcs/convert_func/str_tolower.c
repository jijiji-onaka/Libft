/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_tolower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 05:58:27 by tjinichi          #+#    #+#             */
/*   Updated: 2020/12/17 06:37:00 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/convert_func.h"

/*
** Returns allocate.
*/

char	*str_tolower(char *s)
{
	char	*tmp;
	size_t	i;

	i = 0;
	if (!(tmp = malloc(ft_strlen(s) + 1)))
		return (NULL);
	while (s[i])
	{
		tmp[i] = ft_tolower(s[i]);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
