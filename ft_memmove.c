/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 13:56:43 by ralshraw          #+#    #+#             */
/*   Updated: 2026/09/28 09:05:41 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*b;
	unsigned char	*a;
	size_t			i;

	i = n - 1;
	b = (unsigned char *)dest;
	a = (unsigned char *)src;
	if (src > dest)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		while (n--)
		{
			b[i] = a[i];
			i--;
		}
	}
	return (dest);
}

/*#include <string.h>
int main()
{
	char s[] = {65, 66, 67, 68, 69, 0, 45};
	char s0[] = { 0,  0,  0,  0,  0,  0, 0};
	ft_memmove(s0,s,7);
	printf("%s\n",s0);
	
}*/
