/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoumni <emoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:00:49 by emoumni           #+#    #+#             */
/*   Updated: 2022/11/23 05:07:46 by emoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(*s) * len + 1);
	if (!str)
		return (0);
	while (s[i])
	{
		if (i >= start && j < len)
				str[j++] = s[i];
		i++;
	}
	str[j] = 0;
	return (str);
}
