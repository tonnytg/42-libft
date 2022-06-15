
#include <string.h>
#include <stdio.h>
#include <assert.h>

int	ft_strlen(const char *str);

void	ft_strlen_test()
{
	char *name = "Antonio";
	int count1;
	int count2;

	count1 = strlen(name);
	count2 = strlen(name);

	assert(count1 == count2);
	printf("Test: ft_strlen - PASS\n");
}

int main(void)
{
	ft_strlen_test();
}