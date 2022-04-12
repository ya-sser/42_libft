/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybachaki <ybachaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:21:29 by ybachaki          #+#    #+#             */
/*   Updated: 2021/11/22 23:27:50 by ybachaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	count(int nbr)
{
	int	i;

	i = 0;
	if (nbr <= 0)
		i++;
	while (nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

static int	digits(long nbr, int size)
{
	while (size > 0)
	{
		nbr /= 10;
		size--;
	}
	return (nbr % 10);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*res;
	int		nc;
	long	nbr;

	nbr = n;
	i = 0;
	nc = count(nbr);
	res = malloc(sizeof(char) * (nc + 1));
	if (!res)
		return (NULL);
	if (nbr < 0)
	{
		*(res + i) = '-';
		i++;
		nbr *= -1;
	}
	while (i < nc)
	{
		*(res + i) = digits(nbr, nc - i - 1) + 48;
		i++;
	}
	*(res + i) = 0;
	return (res);
}
