#include <stdio.h>
#include <assert.h>
int main()
{
	int		i;
	char	values[15];

	i = 0;
	while (i < 15)
	{
		printf("position: %d - value: %d\n", i, values[i]);
		i++;
	}
	ft_memset(values, 0, sizeof(values));
	i = 0;
	while (i < 15)
	{
		assert(values[i] == 0);
		i++;
	}
}