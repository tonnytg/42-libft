

#include <string.h>
#include <assert.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n);

int main()
{
	char *value1 = "Antonio";
	char *result1 = memchr(value1, 'o', 4);
	char *result2 = ft_memchr(value1, 'o', 4);

	printf("result1: %s\n", result1);
	printf("result2: %s\n", result2);
	assert(result1 == result2);
}
