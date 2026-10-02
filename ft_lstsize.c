/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 10:21:34 by ralshraw          #+#    #+#             */
/*   Updated: 2026/09/28 10:43:19 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;
	t_list			*str;

	count = 0;
	str = lst;
	if (!lst)
		return (0);
	while (str)
	{
		str = str -> next;
		count++;
	}
	return (count);
}

/*int main()
{
	t_list *head;
	t_list	*s1;
	t_list	*s2;
	t_list	*s3;
	s1 = malloc(sizeof(t_list));
	s2 = malloc(sizeof(t_list));
  	s3 = malloc(sizeof(t_list));


	head = s1;
	
	s1->next = s2;
	s2->next = s3;
	s3->next =NULL;
	printf("%i",ft_lstsize(head));
}*/
