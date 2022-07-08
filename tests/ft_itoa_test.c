//
// Created by Antonio Thomacelli on 07/07/22.
//

#include <stdio.h>
#include <assert.h>

char	*ft_itoa(int n);

int main(void)
{
	char *result;
	char *expected;
	printf("%s\n", ft_itoa(-2312));
	result = ft_itoa(-2312);
	expected = "-2312";
	assert(*result == *expected);

	printf("%s\n", ft_itoa(2312));
	printf("%s\n", ft_itoa(-231212121));
	printf("%s\n", ft_itoa(122312));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(42));
}