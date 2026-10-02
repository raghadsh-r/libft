/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 08:51:13 by ralshraw          #+#    #+#             */
/*   Updated: 2026/09/30 09:32:15 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	findfisr(char const *str, char const *set)
{
	int	i;
	int	j;
	int	found;

	i = 0;
	while (str[i])
	{
		j = 0;
		found = 0;
		while (set[j])
		{
			if (str[i] == set[j])
			{
				found = 1;
				break ;
			}
			j++;
		}
		if (found == 0)
			break ;
		i++;
	}
	return (i);
}

static int	findlast(char const *str, char const *set)
{
	int	i;
	int	j;
	int	found;

	i = ft_strlen(str) - 1;
	if (i < 0)
		return (0);
	while (i >= 0)
	{
		j = 0;
		found = 0;
		while (set[j])
		{
			if (str[i] == set[j])
			{
				found = 1;
				break ;
			}
			j++;
		}
		if (found == 0)
			break ;
		i--;
	}
	return (i);
}

static void	copy(char *p, char const *s, int f, int l)
{
	int	j;

	j = 0;
	while (f <= l)
	{
		p[j] = s[f];
		f++;
		j++;
	}
	p[j] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		f;
	int		l;
	char	*p;

	if (!s1 || !set)
		return (NULL);
	f = findfisr(s1, set);
	l = findlast(s1, set);
	if (f > l || !s1[0])
	{
		p = malloc(1);
		if (!p)
			return (NULL);
		p[0] = '\0';
		return (p);
	}
	p = malloc(sizeof(char) * (l - f + 2));
	if (!p)
		return (NULL);
	copy(p, s1, f, l);
	return (p);
}

/*int main()
{
    char s[] = "abbbsyuedavwriiuabs";
    char b[] = "abs";
    char *c;
c = ft_strtrim(s, b);
if (c)
{
    printf("%s\n", c);
    free(c);
}
return (0);
}*/
