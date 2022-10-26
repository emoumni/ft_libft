#include "libft.h"

void *ft_memset(void *b, int c, size_t len){
		
    char* p=b;
    while(len--)
    {
        *p++ = (char)c;
    }
    return b;
}
