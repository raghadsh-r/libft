/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <ralshraw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 14:27:47 by ralshraw          #+#    #+#             */
/*   Updated: 2026/09/29 13:43:01 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst ||!new)
		return ;
	new -> next = *lst;
	*lst = new;
}

/*int		main(void)
{
	char *k ="hello";
	char *k1 ="1";
	char *k2 ="2";
	char *k3 ="3";

	t_list *a = ft_lstnew(k);
	t_list *b = ft_lstnew(k1);
	t_list *c = ft_lstnew(k2);
	a->next=b;
	b->next=c;
	c->next=NULL;
	t_list *new = ft_lstnew(k3);
	t_list *g=a;//header
	ft_lstadd_front(&g,new);
	t_list *tmp = g;
	while (tmp)
	{
		printf("Node content: %s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	return 0;
}*/
