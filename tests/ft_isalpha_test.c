//
// Created by Antonio Thomacelli on 07/07/22.
//

#include <assert.h>
#include <stdio.h>

int ft_isalpha(int c);

int main() {
	char *str = "12345\nabc";
	char *expected = "000000111";
	int i = 0;
	while (str[i] != '\0') {
		printf("%d", ft_isalpha(str[i]));
		assert(ft_isalpha(str[i]) == (expected[i] - 48));
		i++;
	}
	return (0);
}