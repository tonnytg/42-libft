//
// Created by Antonio Thomacelli on 07/07/22.
//

#include <stdio.h>
#include <assert.h>

char	*ft_strjoin(char const *s1, char const *s2);

int main()
{
	char *str1 = "hello";
	char *str2 = " world!";
	char *expected = "hello world!";
	char *result;
	int i;

	result = ft_strjoin(str1, str2);
	printf("%s\n", result);
	i = 0;
	while (result[i] != '\0')
	{
		assert(result[i] == expected[i]);
		i++;
	}
}