#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content);

int main() {

	int i;
	t_list *l;

	strlen(l);

	l = ft_lstnew("Hello");
	i = 0;
	while (i < 10 && l) {
		printf("%s\n", (char *)l->content);
		l = l->next;
		i++;
	}

	return (0);
}