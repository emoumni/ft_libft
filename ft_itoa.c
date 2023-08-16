/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoumni <emoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 01:34:08 by emoumni           #+#    #+#             */
/*   Updated: 2022/11/23 05:01:33 by emoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ilen(const int n1)
{
	unsigned int	n2;
	unsigned int	i;

	i = 0;
	if (n1 < 0 || n1 == 0)
	{
		n2 = -n1;
		i++;
	}
	else
		n2 = n1;
	while (n2 / 10 > 0)
	{
		n2 = n2 / 10;
		i++;
	}
	if (n2 > 0 && n2 < 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned int	s1_len;
	unsigned int	n1;
	char			*s1;

	s1_len = ilen(n);
	if (n < 0)
		n1 = -n;
	else
		n1 = n;
	s1 = ft_calloc(s1_len + 1, sizeof(char));
	if (!s1)
		return (0);
	while (s1_len > 0)
	{
		if (s1_len == 1 && n < 0)
			s1[s1_len - 1] = '-';
		else
			s1[s1_len - 1] = n1 % 10 + '0';
			n1 = n1 / 10;
			s1_len--;
	}
	return (s1);
}
