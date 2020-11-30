/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_free_2d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 17:51:36 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/30 21:41:20 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*array_free_2d(void ***res, int cur)
{
	int		i;

	i = 0;
	while (i < cur)
	{
		free((*res)[i]);
		(*res)[i] = NULL;
		i++;
	}
	free(*res);
	*res = NULL;
	return (NULL);
}
