//
// Created by Antonio Thomacelli on 07/07/22.
//

//
// Created by Antonio Thomacelli on 07/07/22.
//

#include <stdio.h>
#include <assert.h>
#include <string.h>

size_t  ft_strlen(const char *s);

int main() {
	// create test to strlen
	char *str = "12345\nabc";

	assert(ft_strlen(str) == strlen(str));
	printf("ok\n");
	return (0);
}