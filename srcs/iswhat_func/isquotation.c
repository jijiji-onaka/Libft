/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isquotation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 03:14:10 by tjinichi          #+#    #+#             */
/*   Updated: 2020/12/15 03:14:28 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/iswhat_func.h"

bool		isquotation(int c)
{
	return (isdouble_quotation(c) || issingle_quotation(c));
}
