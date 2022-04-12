/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybachaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 21:13:29 by ybachaki          #+#    #+#             */
/*   Updated: 2021/11/19 04:53:26 by ybachaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (*(haystack + i) && i < len)
	{
		if (*(haystack + i) == *(needle + j))
		{
			while (*(haystack + i) == *(needle + j) && i < len
				&& *(haystack + i))
			{
				i++;
				j++;
			}
			if (j == ft_strlen(needle))
				return ((char *)(haystack + i - j));
			j = 0;
		}
		else
			i++;
	}
	return (0);
}
/*int main()
{
    char tab[]="yasser  naa";
    char tab1[]="naadi";
    printf("%s\n",ft_strnstr(tab,tab1,30));
    return 0;
}*/
