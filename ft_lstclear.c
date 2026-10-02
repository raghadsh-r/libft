/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <ralshraw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 11:08:31 by ralshraw          #+#    #+#             */
/*   Updated: 2026/09/29 13:32:37 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//void ft_delet(void *d)
//{
//	*((int *)d) = 7;
//	free(d);
//}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*s;

	if (!*lst || !del || !lst)
		return ;
	temp = *lst;
	while (temp)
	{
		s = temp -> next;
		ft_lstdelone(temp, del);
		temp = s;
	}
	*lst = NULL;
}

// int main()
// {
// 	t_list *a,*b;
// 	a = malloc(1);
// 	b = malloc(2);
// 	if(!a || !b)
// 		return ;
// 	int x = 0;
// 	int y = 0;
// 	a -> content = &x;
// 	b -> content = &y;
// 	a -> next = b;
// }