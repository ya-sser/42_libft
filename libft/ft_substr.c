/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybachaki <ybachaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 01:46:04 by ybachaki          #+#    #+#             */
/*   Updated: 2021/11/21 00:38:45 by ybachaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (start < ft_strlen(s))
	{
		subs = ft_calloc (len + 1, sizeof(char));
		if (subs == NULL)
			return (NULL);
		while (i < len && *(s + i))
		{
			*(subs + i) = *(s + start);
			i++;
			start++;
		}
	}
	else
		subs = ft_strdup("");
	return (subs);
}
/*int main()
{
	char tab[]="hallo world";
	printf("%s",ft_substr(tab,6,5));
	return 0;
}*/
