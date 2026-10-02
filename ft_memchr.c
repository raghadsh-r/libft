/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 09:56:26 by ralshraw          #+#    #+#             */
/*   Updated: 2026/09/30 09:14:53 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (n > i)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

/*#include <string.h>
int main ()
{
	char s[]="raghad";
	char *b;
	b=ft_memchr(s,0,1);
	printf("%s\n",s);
	printf("%s\n",b);


	char a[]="raghad";
    char *d;
    d=memchr(a,0,1);
    printf("%s\n",a);
    printf("%s",d);

}*/
