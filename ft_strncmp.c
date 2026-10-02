/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 11:43:08 by ralshraw          #+#    #+#             */
/*   Updated: 2026/09/28 09:08:21 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				index;
	const unsigned char	*s11;
	const unsigned char	*s22;

	index = 0;
	s11 = (const unsigned char *)s1;
	s22 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((s11[index] != '\0' || s22[index] != '\0') && n > index)
	{
		if (s11[index] != s22[index])
		{
			return (s11[index] - s22[index]);
		}
		index++;
	}
	return (0);
}

/*#include <string.h>
int main ()
{
	char d[]="raghaa";
	char c[]="rgghab";
	printf("%i\n",ft_strncmp(d,c,2));
	printf("%i",strncmp(d,c,2));


}*/	
