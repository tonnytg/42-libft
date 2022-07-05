
#include <stdio.h>
#include <assert.h>

int     ft_isalnum(int c);

int main () {
	char *str = "12345\nabc";
	char *expected = "111110111";
	int i = 0;
	while (str[i] != '\0') {
		printf("%d", ft_isalnum(str[i]));
		assert( ft_isalnum(str[i]) == (expected[i] - 48));
		i++;
	}
	return (0);
}