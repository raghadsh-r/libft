/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 13:32:28 by ralshraw          #+#    #+#             */
/*   Updated: 2026/09/29 13:49:50 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char fx(unsigned int c, char v)
{
	write(1,&v,1);
	return c;
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		lens;
	char	*ptr;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	lens = ft_strlen(s);
	ptr = malloc((lens + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		ptr [i] = f((unsigned int)i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*int main()
{
	ft_strmapi("raghad",fx);
}*/
