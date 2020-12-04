/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_free_2d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 17:51:36 by tjinichi          #+#    #+#             */
/*   Updated: 2020/12/02 21:08:59 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*array_free_2d(void ***ptr, int cur)
{
	int		i;

	i = 0;
	while ((*ptr)[i] && i < cur)
	{
		free((*ptr)[i]);
		(*ptr)[i] = NULL;
		i++;
	}
	free(*ptr);
	*ptr = NULL;
	return (NULL);
}
