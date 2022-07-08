//
// Created by Antonio Thomacelli on 07/07/22.
//

#include <stdio.h>
#include <assert.h>
#include <string.h>

char	*ft_strdup(const char *str);

int main()
{
	char str[60] = "Hello my Friend, this is a exercise of 42sp!";
	char *ptr;

	ptr = ft_strdup(str);
	printf("%s\n", str);
	printf("%s\n", ptr);
	printf("1: %lu\n", strlen(str));
	printf("2: %lu\n", strlen(ptr));
	assert(strlen(str) == strlen(ptr));
	return 0;
}