/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 23:34:18 by tjinichi          #+#    #+#             */
/*   Updated: 2020/12/04 01:20:45 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strsort(char **str, int (*cmp_by)(char *, char *))
{
	int		i;
	int		j;
	int		str_num;
	int		tmp;

	i = 0;
	str_num = count_2d(str);
	while (i < str_num - 1)
	{
		j = i + 1;
		while (j < str_num)
		{
			if ((tmp = (*cmp_by)(str[i], str[j])) == INT_MIN)
				return (EXIT_FAILURE);
			if (tmp > 0)
				ft_swap((void**)&(str[i]), (void**)&(str[j]));
			j++;
		}
		i++;
	}
	return (EXIT_SUCCESS);
}
