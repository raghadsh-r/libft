/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 09:42:26 by ralshraw          #+#    #+#             */
/*   Updated: 2026/09/24 09:48:10 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s2[j] == '\0')
		return ((char *)s1);
	while (s1[i] && len > i)
	{
		j = 0;
		while (s2[j] == s1[i + j] && i + j < len)
		{
			if (s2[j + 1] == '\0')
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/*#include <bsd/string.h>
#include <stdio.h>
int main() {
  char myStr[] = "raghad mahmoud alsharawneh";
 char *myPtr = ft_strnstr(myStr, "mahmoud",11);
  if (myPtr != NULL) {
    printf("%s", myPtr);
  }
  return 0;
}*/
