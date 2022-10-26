#include "libft.h"

int ft_isprint(int p){
	if(p >= ' ' && p <= '~')
	return 1;
	return 0;
}
