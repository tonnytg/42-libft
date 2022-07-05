
#include <stdio.h>
#include <assert.h>

void    *ft_calloc(size_t nmemb, size_t size);
void    *ft_memset(void *ptr, int c, size_t size);

int main() {
	char *str = "test";
	str = ft_calloc(10, sizeof(char));
	printf("%s\n", str);
	assert(str != NULL);
	return 0;
}