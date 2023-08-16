/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoumni <emoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 03:59:36 by emoumni           #+#    #+#             */
/*   Updated: 2022/11/23 04:44:53 by emoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	charinset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	s;
	size_t	e;
	size_t	i;

	if (!s1)
		return (0);
	if (!set)
		return ((char *)s1);
	s = 0;
	while (s1[s] && charinset(s1[s], set))
		s++;
	e = ft_strlen(s1);
	while (e > s && charinset(s1[e - 1], set))
		e--;
	str = (char *)malloc(sizeof(*s1) * (e - s + 1));
	if (!str)
		return (0);
	i = 0;
	while (s < e)
		str[i++] = s1[s++];
	str[i] = 0;
	return (str);
}
