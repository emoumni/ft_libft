/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoumni <emoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 00:08:12 by emoumni           #+#    #+#             */
/*   Updated: 2022/11/22 02:14:35 by emoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*b;

	if (!dst && !src)
		return (0);
	b = dst;
	if (src < dst)
	{
		src += len;
		dst += len;
		while (len--)
		*(char *)(--dst) = *(char *)(--src);
	}
	else
		while (len--)
			*(char *)(dst++) = *(char *)(src++);
	return (b);
}
