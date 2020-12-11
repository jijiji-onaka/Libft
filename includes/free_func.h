/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_func.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 21:18:22 by tjinichi          #+#    #+#             */
/*   Updated: 2020/12/11 21:18:29 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FREE_FUNC_H
# define FREE_FUNC_H

# include <stdlib.h>

void	*ptr_2d_free(void ***ptr, int cur);
void	ptr_free(void **ptr);

#endif
