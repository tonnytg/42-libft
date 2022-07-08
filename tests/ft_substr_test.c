//
// Created by Antonio Thomacelli on 07/07/22.
//

#include <stdio.h>
#include <string.h>
#include <assert.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);
int     ft_memcmp(const void *s1, const void *s2, size_t n);

int	main()
{
	char *result;
	char *expected = "llo";
	result = ft_substr("hello", 2, 3);
	printf("%s\n", result);
	assert(ft_memcmp(result, expected, 3) == 0);
}