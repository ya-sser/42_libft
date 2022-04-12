/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybachaki <ybachaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 02:25:45 by ybachaki          #+#    #+#             */
/*   Updated: 2021/11/22 07:26:32 by ybachaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*res;

	i = 0;
	len = ft_strlen(s1);
	res = ft_calloc(len + 1, sizeof(char));
	if (res == NULL)
		return (NULL);
	while (*(s1 + i))
	{
		*(res + i) = *(s1 + i);
		i++;
	}
	return (res);
}
