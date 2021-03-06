
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n);

int main()
{
	char *value1 = "Antonio";
	char *value2 = "Antonio";
	int result1 = memcmp(value1, value2, 5);
	int result2 = ft_memcmp(value1, value2, 5);
	printf("%d\n", result1);
	printf("%d\n", result2);
	assert(result1 == result2);

	char *value3 = "AntOnio";
	char *value4 = "Antonio";
	int result3 = memcmp(value3, value4, 4);
	int result4 = ft_memcmp(value3, value4, 4);
	printf("%d\n", result3);
	assert(result3 < 0);
	printf("%d\n", result4);
	assert(result4 < 0);
}