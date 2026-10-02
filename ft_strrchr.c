/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 11:20:20 by ralshraw          #+#    #+#             */
/*   Updated: 2026/09/30 09:13:54 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	if (c == 0)
	{
		while (*str)
			str++;
		return (str);
	}
	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		if (str[i] == (unsigned char )c)
			return (&str[i]);
		i--;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	char r[] ="\n";
	char *s;
	//ft_strchr(r,97);
	printf("%s",ft_strrchr(r,0));

	char rb[] ="";
        //ft_strchr(r,97);
        printf("%s",strrchr(rb,0));

}*/
