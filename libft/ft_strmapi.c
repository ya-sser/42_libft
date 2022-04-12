/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybachaki <ybachaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 22:14:13 by ybachaki          #+#    #+#             */
/*   Updated: 2021/11/23 01:09:14 by ybachaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*res;

	i = 0;
	if (!s)
		return (0);
	res = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (0);
	while (*(s + i))
	{
		*(res + i) = f(i, *(s + i));
		i++;
	}
	*(res + i) = '\0';
	return (res);
}
// char f(unsigned int i, char c)
// {
// 	i = 0;
// 	c+=32;
// 	return c;
// }
// int main()
// {
// 	char tab[]="YASSER";
// 	char *res;
// 	res = ft_strmapi(tab, f);
// 	printf("%s", res);
// 	return 0;
// }