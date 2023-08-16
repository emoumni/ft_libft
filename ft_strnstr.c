/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoumni <emoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:58:25 by emoumni           #+#    #+#             */
/*   Updated: 2022/11/28 01:41:11 by emoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	char		*str;
	size_t		i;
	size_t		j;

	i = 0;
	str = (char *)haystack;
	if (!needle[i])
		return (str);
	while (i < n && str[i])
	{
		j = 0;
		if (str[i] == needle[j])
		{
			while ((i + j) < n && str[i + j] == needle[j] && str[i + j] != '\0')
				j++;
			if (needle[j] == '\0')
				return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
