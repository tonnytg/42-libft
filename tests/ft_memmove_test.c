#include <stdio.h>
#include <assert.h>

void *ft_memmove(void *dest, const void *src, size_t n);

int main()
{
	char *value1 = "Antonio";
	char value2[20];
	char *buffer;
	
	buffer = ft_memmove(value2, value1, 7);
	printf("value2: %s\n", value2);
	printf("buffer: %s\n", buffer);
	assert(buffer == value2);
}