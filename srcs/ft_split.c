/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:43:10 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/07 22:38:16 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		word_count(char const *s, char c)
{
	int		cnt;

	cnt = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
		{
			cnt++;
			while (*s && *s != c)
				s++;
		}
	}
	return (cnt);
}

static int		word_length(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != c && s[i])
	{
		i++;
	}
	return (i);
}

static char		**insert_word(char const *s, char c, int wc, char **res)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	while (i < wc)
	{
		while (*s == c)
			s++;
		len = word_length(s, c);
		if (!(res[i] = malloc(sizeof(char) * (len + 1))))
			return (array_free_2d(&res, i));
		j = 0;
		while (j < len)
		{
			res[i][j++] = *s++;
		}
		res[i][j] = '\0';
		i++;
	}
	res[i] = NULL;
	return (res);
}

char			**ft_split(char const *s, char c)
{
	char	**res;
	int		wc;

	if (!s)
		return (NULL);
	wc = word_count(s, c);
	if (!(res = malloc(sizeof(char *) * (wc + 1))))
		return (NULL);
	res = insert_word(s, c, wc, res);
	return (res);
}
