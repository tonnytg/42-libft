//#include <stdio.h>
//
//int main( )
//{
//    printf("Hello, World!\n");
//    return 0;
//}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct s_list {
	void *content;
	struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content) {
	t_list *n;

	n = (t_list *)malloc(sizeof(*n));
	if (!n)
		return (NULL);
	n->content = content;
	n->next = NULL;
	return (n);
}

void ft_lstadd_front(t_list **lst, t_list *new) {
	new->next = *lst;
	*lst = new;
}

int ft_lstsize(t_list *lst) {
	size_t len;

	len = 0;
	while (lst != NULL) {
		lst = lst->next;
		len++;
	}
	return (len);
}

t_list *ft_lstlast(t_list *lst) {
	if (!lst)
		return (0);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void ft_lstadd_back(t_list **lst, t_list *new) {
	t_list *temp;

	if (!*lst)
		*lst = new;
	else {
		temp = ft_lstlast(*lst);
		temp->next = new;
	}
}

void ft_lstdelone(t_list *lst, void (*del)(void *)) {
	if (!lst)
		return;
	(*del)(lst->content);
	free(lst);
}

void ft_lstclear(t_list **lst, void (*del)(void *)) {
	t_list *tmp;

	while (*lst != NULL) {
		tmp = *lst;
		*lst = (*lst)->next;
		del(tmp->content);
		free(tmp);
	}
}

void ft_lstiter(t_list *lst, void (*f)(void *)) {
	if (!lst || !f)
		return;
	while (lst) {
		(*f)(lst->content);
		lst = lst->next;
	}
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) {
	t_list *list;
	t_list *newnode;

	list = NULL;
	while (lst) {
		newnode = ft_lstnew(f(lst->content));
		if (!newnode) {
			ft_lstclear(&newnode, del);
			return (NULL);
		} else
			ft_lstadd_back(&list, newnode);
		lst = lst->next;
	}
	return (list);
}

int main() {

	int i;
	t_list *l;
	t_list *last;

	// create list with first position
	l = ft_lstnew("Hello");

	// get exist list and attach new node in the beginning
	ft_lstadd_front(&l, ft_lstnew("World"));

	// count number of nodes in the list
	printf(ft_lstsize(l) == 2 ? "OK - Size\n" : "ERROR\n");

	// get last node and compare content Hello
	last = ft_lstlast(l);
	printf(strcmp(last->content, "Hello") == 0 ? "OK - Content\n" : "ERROR\n");

	// create new node and attach it in the end of the list
	ft_lstadd_back(&l, ft_lstnew("!"));

	// Print values
	i = 0;
	while (i < 10 && l) {
		printf("%s\n", (char *) l->content);
		l = l->next;
		i++;
		printf("%d\n", i);
	}

	// get last node and compare content !
//	last = ft_lstlast(l);
//	last = ft_lstnew("\0");
//	printf("end\n");
//	printf(strcmp(last->content, "\0") == 0 ? "OK\n" : "ERROR\n");
//
//	ft_lstdelone(last, free);
//	printf(strcmp(last->next, NULL) == 0 ? "OK\n" : "ERROR\n");
//	// check if last node was deleted
//	printf(ft_lstlast(l) == last ? "ERROR\n" : "OK - Last node\n");

//	// clear list
//	ft_lstclear(&l, free);

	return (0);
}
