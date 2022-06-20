#include <string.h>
#include <assert.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n);

int main()
{
	int result1;
	// int resul2;
	char *s1 = "AntOni"; //AntO 4 -> -32
	char *s2 = "Antoni"; //Anto 4 -> -32

	result1 = strncmp(s1, s2, 4);
	printf("Result: %d\n", result1);
	assert(result1 == -32);

	result1 = ft_strncmp(s1, s2, 4);
	printf("Result2: %d\n", result1);
	assert(result1 == -32);
}
