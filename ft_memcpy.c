/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 14:47:39 by ralshraw          #+#    #+#             */
/*   Updated: 2026/09/28 09:02:07 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*src2;
	unsigned char		*dis;
	size_t				i;

	src2 = src;
	dis = dest;
	i = 0;
	while (n > i)
	{
		dis[i] = src2[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char a[]="raghad";
// 	char s[]="mahmoud";
// 	ft_memcpy(a,s,3);
// 	printf("%s\n%s",a,s);
// 	printf("%s\n",memcpy("raghad","mahmoud",-1));
// }
