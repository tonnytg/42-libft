//
// Created by Antonio Thomacelli on 07/07/22.
//

#include <stdio.h>
#include <ctype.h>
#include <assert.h>

int	ft_tolower(int ch);

int main(void)
{

	printf("%c\n", tolower('C'));
	printf("%c\n", ft_tolower('C'));
	assert(tolower('C') == ft_tolower('C'));
}
