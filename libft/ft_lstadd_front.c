/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokur <sokur@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:43:38 by sokur             #+#    #+#             */
/*   Updated: 2023/07/08 18:05:58 by sokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back_cmp(t_list **lst, t_list *new, int (*cmp)(void *, void *))
{
	t_list	*n;

	if (lst == NULL || *lst == NULL) {
		ft_lstadd_front(lst, new);
		return ;
	}
	if (cmp((*lst)->content, new->content) < 0) {
		ft_lstadd_front(lst, new);
	} else if ((*lst)->next == NULL) {
		ft_lstadd_back(lst, new);
	} else {
		n = *lst;
		while (n->next != NULL)
		{
			if (cmp((n->next)->content, new->content) < 0) {
				break;
			}
			n = n->next;
		}
		new->next = n->next;
		n->next = new;
	}
}
