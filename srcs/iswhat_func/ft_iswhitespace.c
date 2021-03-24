/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 13:10:55 by tjinichi          #+#    #+#             */
/*   Updated: 2021/03/24 15:03:25 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/iswhat_func.h"

bool	ft_iswhitespace(int c)
{
	if (c && (c == ' ' || c == '\n' || c == '\t' ||
			c == '\v' || c == '\f' || c == '\r'))
		return (1);
	return (0);
}
