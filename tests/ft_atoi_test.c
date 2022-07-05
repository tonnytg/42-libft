// create a int main() to test my ft_atoi

#include <stdio.h>
#include <assert.h>

int     ft_atoi(const char *str);

int main() {
	char *str = "12345";
	int i = ft_atoi(str);
	printf("%d\n", i);
	// test with assert
	assert(i == 12345);
	return 0;
}