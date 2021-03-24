/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_func.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 20:46:43 by tjinichi          #+#    #+#             */
/*   Updated: 2021/03/24 15:14:38 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGORITHM_FUNC_H
# define ALGORITHM_FUNC_H

# include "libft.h"

void	ft_swap(void **a, void **b);
bool	merge_strsort(char **array, u_int64_t begin, \
			u_int64_t end, int (*cmp_by)());
int		str_bsearch(char *key, const char *base[], int array_size,
						int (*cmp_by)());

#endif
