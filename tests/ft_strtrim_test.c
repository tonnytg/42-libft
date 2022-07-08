//
// Created by Antonio Thomacelli on 07/07/22.
//

#include <stdio.h>
#include <assert.h>

char    *ft_strtrim(char const *s1, char const *set);

int main()
{
	char *str1 = "hello";
	char *expected1 = "hell";
	char *expected2 = "ello";
	char *result;

	result = ft_strtrim(str1, "o");
	printf("%s\n", result);
	assert(*result == *expected1);

	result = ft_strtrim(str1, "h");
	printf("%s\n", result);
	assert(*result == *expected2);
}
