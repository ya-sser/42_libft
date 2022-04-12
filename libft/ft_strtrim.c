/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybachaki <ybachaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:38:44 by ybachaki          #+#    #+#             */
/*   Updated: 2021/11/23 01:10:39 by ybachaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	leftcheck(char const *s, char const *set)
{
	int	i;

	i = 0;
	while (*(s + i) && ft_strchr(set, *(s + i)))
		i++;
	return (i);
}

static int	rightcheck(char const *s, char const *set)
{
	int	len;
	int	i;

	len = ft_strlen(s) - 1;
	i = 0;
	while (len >= 0 && ft_strchr(set, *(s + len)))
	{
		len--;
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*res;

	res = NULL;
	if (!s1 || !set)
		return (0);
	len = ft_strlen(s1);
	if (*set == '\0')
		return (ft_strdup(s1));
	if (len - (rightcheck(s1, set) + leftcheck(s1, set)) <= 0)
		return (ft_strdup(""));
	len -= rightcheck(s1, set) + leftcheck(s1, set);
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s1 + leftcheck(s1, set), len + 1);
	return (res);
}
/*int main()
{
	char	tab[]="   -* *yasser---* ";
	char set[]=" *-";
	printf("%s", ft_strtrim(tab,set));
	return 0;
}*/
