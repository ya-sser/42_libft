/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybachaki <ybachaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 01:45:10 by ybachaki          #+#    #+#             */
/*   Updated: 2021/11/20 07:09:27 by ybachaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	if (!s1 || !s2)
		return (0);
	res = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		return (NULL);
	while (*(s1 + i))
	{
		*(res + i) = *(s1 + i);
		i++;
	}
	j = i;
	i = 0;
	while (*(s2 + i))
	{
		*(res + j) = *(s2 + i);
		i++;
		j++;
	}
	*(res + j) = '\0';
	return (res);
}
