/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 14:24:39 by ralshraw          #+#    #+#             */
/*   Updated: 2026/09/24 09:51:55 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	temp = s;
	while (n > 0)
	{
		temp[i] = (unsigned char )c;
		i++;
		n--;
	}
	return (s);
}

/*#include <string.h>
int main()
{
	char a[]="ee";
	printf("%s\n",a);
	ft_memset(a,'w',1);
	char b[]="ee";
	memset(b,'w',1);
	printf("%s\n",a);
	printf("%s",b);

}*/
