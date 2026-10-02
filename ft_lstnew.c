/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 08:57:09 by ralshraw          #+#    #+#             */
/*   Updated: 2026/09/28 09:00:04 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*point;

	point = malloc (sizeof(t_list));
	if (!point)
		return (NULL);
	point -> content = content;
	point -> next = NULL ;
	return (point);
}

/*int main()
{
    int a[]={1,2,4,3};
    int x = 0;
    t_list c = ft_lstnew(&x);
    printf("the number: %i ",c ->content);
}*/
