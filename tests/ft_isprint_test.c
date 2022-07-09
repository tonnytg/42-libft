//
// Created by Antonio Thomacelli on 07/07/22.
//

#include <stdio.h>
#include <assert.h>
#include <ctype.h>

int ft_isprint(int c);

int main() {
	// create test to ft_isprint
	char *str = "12345\nabc";
	char *expected = "111110111";
	int i = 0;
	int result;

	while (str[i] != '\0') {
		printf("%d", ft_isprint(str[i]));
		result = isprint(str[i]);
		// printf("%d\n", result);
		assert(result >= (expected[i] - 48));
		assert( ft_isprint(str[i]) == (expected[i] - 48));
		// assert( ft_isprint(str[i]) == result);
		// assert( result == (expected[i] - 48));
		i++;
	}
	return (0);
}