#include <stdio.h>
#include <assert.h>

void *ft_strlcpy(void *dest, const void *src, size_t n);

int main()
{
	int i;
	char *value1 = "Antonio";
	char value2[20];
	
	ft_strlcpy(value2, value1, 7);
	printf("value1: %s\n", value1);
	printf("value2: %s\n", value2);
	// assert(value1 == value2);
	i = 0;
	while (i < 7)
	{
		assert(value1[i] == value2[i]);
		i++;
	}
	assert(value2[i] == '\0');
}