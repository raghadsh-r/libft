/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <ralshraw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:21:50 by ralshraw          #+#    #+#             */
/*   Updated: 2026/09/29 13:48:13 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void raghad(void *c)
// {
// 	*((int *)(c))= 20; 
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (!lst || !f)
		return ;
	temp = lst;
	while (temp -> next)
	{
		f(temp -> content);
		temp = temp -> next;
	}
	f(temp -> content);
}

// int main()
// {
// 	t_list *a,*b,*c;
// 	b = malloc(sizeof(t_list));
// 	c = malloc(sizeof(t_list));
// 	int x = 10;
// 	int y = 10;
// 	int zz = 8;
// 	b -> content = &x;
// 	c -> content = &y;
// 	a = b;
// 	b -> next= c;
// 	c -> next = NULL;
// 	printf("x is %i",x);
// 	printf("\ny is %i",y);
// 	ft_lstiter(b,raghad);
// 	printf("\nx is %i",x);
//     printf("\ny is %i",y);
// }
