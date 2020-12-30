/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_func.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 20:46:43 by tjinichi          #+#    #+#             */
/*   Updated: 2020/12/30 20:12:01 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGORITHM_FUNC_H
# define ALGORITHM_FUNC_H

# include "libft.h"

void	ft_swap(void **a, void **b);
int		marge_strsort(char **array, size_t begin, \
			size_t end, int (*cmp_by)());
int		str_bsearch(char *key, const char *base[], int array_size);

#endif
