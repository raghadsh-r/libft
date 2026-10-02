/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <ralshraw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 09:54:03 by ralshraw          #+#    #+#             */
/*   Updated: 2026/09/30 09:33:26 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_str(char **str, int len)
{
	int	i;	

	i = 0;
	while (i < len)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static int	count_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static int	count_len(char const *s, int *index, char c)
{
	int	count;

	count = 0;
	while (s[(*index)] == c && s[(*index)])
		*index += 1;
	while (s[(*index)] != c && s[(*index)])
	{
		count++;
		*index += 1;
	}
	return (count);
}

static void	fot_copy(char const *s, char **str, int numword, char c)
{
	int	i;
	int	x;
	int	j;
	int	f;

	i = 0;
	x = 0;
	while (i < numword)
	{
		j = 0;
		f = 0;
		while (s[x] == c)
			x++;
		while (s[x] != c && s[x])
		{
			str[i][j] = s[x];
			j++;
			x++;
			f = 1;
		}
		if (f)
			str[i][j] = '\0';
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		x;

	x = 0;
	i = 0;
	if (!s)
		return (NULL);
	str = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (i < count_word(s, c))
	{
		str[i] = malloc((count_len(s, &x, c) + 1) * sizeof(char));
		if (!str || !str[i])
		{
			free_str(str, i);
			return (NULL);
		}
		i++;
	}
	str[i] = NULL;
	fot_copy(s, str, count_word(s, c), c);
	return (str);
}

/*int main()
{
	char r[] = "raghad mahmoud alsharawneh  ";
	char **str;
	str = ft_split(r, ' ');
	int i = count_word(r,' ');
	printf("%d\n", i);
	if(!str)
	{
		free_str(str,i - 1);
		return (0);
	}
	printf("s[0] : %s\n",str[0]);
	printf("s[1] :%s\n",str[1]);
	printf("s[2] :%s\n",str[2]);
	free_str(str,i);
}*/
