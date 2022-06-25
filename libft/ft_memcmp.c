#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	i = 0;
	while (i < n)
	{
		if (*(char *)s1 != *(char *)s2)
		{
			if (*(char *)s1 - *(char *)s2 > 0)
				return (1);
			if (*(char *)s1 - *(char *)s2 < 0)
				return (-1);	
		}
		i++;
		s1++;
		s2++;
	}
	return (0);
}

/*
	The memcmp() function compares the first n bytes (each interpreted as un‐
    signed char) of the memory areas s1 and s2.	
*/