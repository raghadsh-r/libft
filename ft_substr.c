/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 12:05:16 by ralshraw          #+#    #+#             */
/*   Updated: 2026/09/28 11:32:10 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	lens;

	if (!s)
		return (NULL);
	lens = ft_strlen(s);
	if (start >= (unsigned int)lens)
	{
		return (ft_strdup(""));
	}
	if (len > lens - start)
		len = lens - start;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}

/*int main ()
{
	char c[]="raghad";
	char *b;
	 b = ft_substr(c,2,6);
	free(b);
	printf("%s",b);
}*/