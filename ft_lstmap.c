/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <ralshraw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 13:07:17 by ralshraw          #+#    #+#             */
/*   Updated: 2026/09/30 13:28:03 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void d(void *s)
{
	free(s);	
}
void *f(void *s)
{
	unsigned char *str;
	str = s;
	int  i = 0;
	while(str[i])
	{
		str[i] = '3';
		i++;
	}
	return ();
}*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*c;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	c = new;
	while (lst)
	{
		temp = f(lst -> content);
		new = ft_lstnew(temp);
		if (!new)
		{
			del(temp);
			ft_lstclear(&c, del);
			return (NULL);
		}
		ft_lstadd_back(&c, new);
		lst = lst -> next;
	}
	return (c);
}
