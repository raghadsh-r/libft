/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 10:35:13 by ralshraw          #+#    #+#             */
/*   Updated: 2026/09/30 09:13:27 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	if (c == 0)
	{
		while (*str != '\0')
			str++;
		return (str);
	}
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	char r[] ="raghad\n";
	char *s;
	//ft_strchr(r,97);
	printf("%s\ns",ft_strchr(r, 'r'+256));

	char rb[] ="raghad";
        //ft_strchr(r,97);
        printf("%s",strchr(rb,'\0'));

}*/
