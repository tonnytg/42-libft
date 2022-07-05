
#include <stdio.h>
#include <assert.h>
#include <string.h>

void    ft_bzero(void *s, size_t n);

int main() {
	char str[5] = "hello";
	ft_bzero(str, 5);
	assert(strcmp(str, "") == 0);
	return 0;
}