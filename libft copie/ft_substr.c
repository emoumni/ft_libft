#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len){
		unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (0);
	if (start > len)
		return (0);
		while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
