#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*clear;

	clear = *lst;
	while (clear)
	{
		*lst = clear->next;
		ft_lstdelone(clear, del);
		clear = *lst;
	}
}
