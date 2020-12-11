/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_func.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 20:46:43 by tjinichi          #+#    #+#             */
/*   Updated: 2020/12/12 00:34:02 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_FUNC_H
# define SORT_FUNC_H

# include "libft.h"

void	ft_swap(void **a, void **b);
int		marge_strsort(char **array, size_t begin, \
			size_t end, int (*cmp_by)());

#endif
