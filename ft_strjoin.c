/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 12:50:54 by ralshraw          #+#    #+#             */
/*   Updated: 2026/09/28 09:23:01 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens2;
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	lens2 = ft_strlen(s2);
	str = malloc((ft_strlen(s1) + lens2 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

/*int main()
{
	char const b[]="rd";
	char const c[]="";
	char *d;
	d = ft_strjoin(b,c);
	printf("%s",d);
}*/
