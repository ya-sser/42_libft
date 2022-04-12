/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybachaki <ybachaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:12:21 by ybachaki          #+#    #+#             */
/*   Updated: 2021/11/23 00:51:41 by ybachaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = ft_strlen(dst);
	if (dstsize > 0)
	{
		while (*(dst + i))
			i++;
		while (i < dstsize - 1 && *(src + j))
		{
			*(dst + i) = *(src + j);
			i++;
			j++;
		}
		*(dst + i) = '\0';
	}
	if (dstsize >= len)
		return (ft_strlen(src) + len);
	return (dstsize + ft_strlen(src));
}
// int main()
// {
// 	char tab[16]="rrrrrrrrrrrrrrr";

// 	printf("%zu\n",ft_strlcat(tab, "lorem ipsum dolor sit amet", 5));
// 	printf("%s",tab);

// 	return 0;
// }
