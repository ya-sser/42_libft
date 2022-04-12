/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybachaki <ybachaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 22:24:31 by ybachaki          #+#    #+#             */
/*   Updated: 2021/11/20 04:33:06 by ybachaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (s)
	{
		while (*(s + i))
		{
			f(i, (s + i));
			i++;
		}
	}
}
/*
void	x(unsigned int i, char *c)
{
	i = 0;
	*c -= 32;
}

int main()
{
	char tab[]="yasser";
	ft_striteri(tab, &x);
	printf("%s", tab);
	return 0;
}
*/
