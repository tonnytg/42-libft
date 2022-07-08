//
// Created by Antonio Thomacelli on 07/07/22.
//

#include <stdio.h>
#include <assert.h>
#include <ctype.h>

int ft_isascii(int c);

int main() {
	// create test to ft_asscii
	char *str = "12345\nabc";
	char *expected = "111111111";
	int i = 0;
	int result;

	while (str[i] != '\0') {
		printf("%d", ft_isascii(str[i]));
		result = isascii(str[i]);
		assert( ft_isascii(str[i]) == (expected[i] - 48));
		assert( ft_isascii(str[i]) == result);
		assert( result == (expected[i] - 48));
		i++;
	}
	return (0);
}