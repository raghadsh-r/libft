/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <ralshraw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 09:07:06 by ralshraw          #+#    #+#             */
/*   Updated: 2026/09/29 13:45:38 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//void d(void *s)
// 	free(s);	
//}

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst -> content);
	free(lst);
}

// int main()
// {
// 	t_list *a,*b,*c;
// 	a = malloc(sizeof(t_list));
// 	int x = 7;
// 	a -> content = &x;
// 	a -> next = NULL;
// 	printf("%i",x);
// 	printf("%i",*((int *)(a -> content)));
// 	ft_lstdelone(a,d);
// 	printf("%i",*((int *)(a -> content)));
// 	printf("%i",x);
// }
