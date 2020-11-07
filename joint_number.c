/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   joint_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 04:02:54 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/07 22:28:36 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** this function puts a number after a string
** and doesn't take into account the minus.
*/

char			*joint_number(char *s, long long num)
{
	char		*res;
	long long	num_len;
	size_t		s_len;
	size_t		i;

	num_len = ft_numlen(num);
	s_len = ft_strlen(s);
	if (!(res = malloc(sizeof(char) * (s_len + num_len + 3))))
		return (NULL);
	res[s_len + num_len + 2] = '\0';
	res[s_len + num_len + 1] = ']';
	while (num != 0)
	{
		res[s_len + num_len] = num % 10 + '0';
		num /= 10;
		num_len--;
	}
	res[s_len + num_len] = '[';
	i = 0;
	while (s[i])
	{
		res[i] = s[i];
		i++;
	}
	return (res);
}
