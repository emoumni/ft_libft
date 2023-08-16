/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoumni <emoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 00:11:17 by emoumni           #+#    #+#             */
/*   Updated: 2022/11/28 00:53:08 by emoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*d;
	char	*r;
	size_t	i;

	d = (char *)s1;
	r = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (d[i] != r[i])
			return ((unsigned char)d[i] - (unsigned char)r[i]);
			i++;
	}
	return (0);
}
