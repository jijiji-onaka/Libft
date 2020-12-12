/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   re_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 04:01:34 by tjinichi          #+#    #+#             */
/*   Updated: 2020/12/13 04:04:53 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/string_func.h"

char	*re_strdup(char **s1)
{
	char	*res;
	size_t	len;

	if (*s1 == NULL)
		return (ft_strdup(""));
	len = ft_strlen(*s1) + 1;
	if (!(res = malloc(sizeof(char) * (len))))
		return (NULL);
	ft_memcpy(res, *s1, len);
	ptr_free((void**)s1);
	return (res);
}
