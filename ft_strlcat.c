/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 12:55:45 by ralshraw          #+#    #+#             */
/*   Updated: 2026/09/28 09:14:11 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	i;
	size_t	j;

	j = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (lendst >= size)
		return (lensrc + size);
	i = lendst;
	while (src[j] && (unsigned)i < size - 1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (lendst + lensrc);
}

/*int main()
{
	char m[]="marah";
	char b[]="hi77";
	int i = ft_strlcat(m,b,0);
	printf("%i",i);
}*/
