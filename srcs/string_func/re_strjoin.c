/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   re_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 01:45:50 by tjinichi          #+#    #+#             */
/*   Updated: 2020/12/15 02:33:05 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/string_func.h"

char	*re_strjoin(char **s1, char *s2)
{
	char	*res;
	size_t	i;
	size_t	j;

	if (*s1 == NULL)
		*s1 = ft_strdup("");
	res = malloc(ft_strlen(*s1) + ft_strlen(s2) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while ((*s1)[i])
	{
		res[i] = (*s1)[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		res[i + j] = s2[j];
		j++;
	}
	res[i + j] = '\0';
	// printf("s1 = %s\n", *s1);
	ptr_free((void**)s1);
	// printf("res = %s\n", res);
	// printf("s2 = %s\n", s2);
	return (res);
}
