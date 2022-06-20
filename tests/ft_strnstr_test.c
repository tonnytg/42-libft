#include <bsd/string.h>
#include <stdio.h>
#include <assert.h>

char	*ft_strnstr(const char *big, const char *little, size_t len);

int main()
{
	// char *bigvalue1 = "agua pedra papel";
	// char *smallvalue1 = "agua";

	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "a";
	char *ptr1;
	char *ptr2;

	ptr1 = strnstr(largestring, smallstring, 11);
	ptr2 = ft_strnstr(largestring, smallstring, 11);

	printf("ptr1: %s\n", ptr1);
	printf("ptr2: %s\n", ptr2);
	assert(ptr1 == ptr2);
	return (0);
}
