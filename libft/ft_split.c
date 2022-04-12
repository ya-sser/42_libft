/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybachaki <ybachaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:11:10 by ybachaki          #+#    #+#             */
/*   Updated: 2021/11/22 23:21:27 by ybachaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	stringscount(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			while (*(s + i) != c && *(s + i))
				i++;
			len++;
		}
		else
			i++;
	}
	return (len);
}

static char	**ft_free(char **res, int k)
{
	while (k >= 0)
	{
		free(*(res + k));
		k--;
	}
	free(res);
	return (NULL);
}

static char	**remplissage(char **res, char c, char const *s)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			while (*(s + i) != c && *(s + i) && i++ >= 0)
				j++;
			*(res + k) = ft_calloc(j + 1, sizeof(char));
			if (*(res + k) == NULL)
				return (ft_free(res, k - 1));
			ft_strlcpy(*(res + k), (s + i - j), j + 1);
			j = 0;
			k++;
		}
		else
			i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		x;

	if (!s)
		return (0);
	x = stringscount(s, c);
	res = ft_calloc(x + 1, sizeof(char *));
	if (!res)
		return (0);
	return (remplissage(res, c, s));
}
