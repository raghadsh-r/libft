/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <ralshraw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 16:30:27 by ralshraw          #+#    #+#             */
/*   Updated: 2026/09/29 13:44:33 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	if (!lst)
		return (NULL);
	ptr = lst;
	while (ptr -> next)
	{
		ptr = ptr -> next;
	}
	return (ptr);
}

/*
int main()
{
	t_list *a;
	t_list *b;
	t_list *c;
	int x =1;
	int z =2;
	c = malloc(sizeof(t_list));
	b = malloc(sizeof(t_list));
	a = b;
	b -> next = c;
	c -> next = NULL;
	b -> content = &x;
	c -> content = &z; 
	t_list *f= ft_lstlast(a);
	printf("hiiiiiiii %i",*((int *)(f->content)));
	
}*/
