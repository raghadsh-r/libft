/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 11:17:32 by ralshraw          #+#    #+#             */
/*   Updated: 2026/09/24 12:04:10 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		lens;
	int		i;
	char	*dis;

	i = 0;
	lens = ft_strlen(s);
	dis = malloc((lens + 1) * sizeof(char));
	if (dis == NULL)
		return (NULL);
	while (lens > i)
	{
		dis[i] = s[i];
		i++;
	}
	dis[i] = '\0';
	return (dis);
}

/*int main()
{
	char b[] = "raghad";
	char *a;
	a = ft_strdup(b);
	printf("%s\n",b);
	printf("%s",a);
}*/
