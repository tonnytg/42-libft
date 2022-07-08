//
// Created by Antonio Thomacelli on 07/07/22.
//

#include <stdio.h>
#include <assert.h>

int ft_isdigit(int c);

int main() {
	char *str = "12345\nabc";
	char *expected = "111110000";
	int i = 0;
	while (str[i] != '\0') {
		printf("%d", ft_isdigit(str[i]));
		assert( ft_isdigit(str[i]) == (expected[i] - 48));
		i++;
	}
	return (0);
}