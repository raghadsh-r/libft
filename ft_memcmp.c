/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <ralshraw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 10:13:38 by ralshraw          #+#    #+#             */
/*   Updated: 2026/09/30 09:16:18 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cheak(unsigned char *str1, unsigned char *str2, size_t n)
{
	size_t	index ;
	int		flag;

	flag = 0;
	index = 0;
	while (index < n)
	{
		if (str1[index] == str2[index])
			flag = 0;
		else if (str1[index] > str2[index])
		{
			flag = (str1[index] - '0') - (str2[index] - '0');
			break ;
		}
		else if (str1[index] < str2[index])
		{
			flag = (str1[index] - '0') - (str2[index] - '0');
			break ;
		}
		index++;
	}
	return (flag);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (char unsigned *)s1;
	str2 = (char unsigned *)s2;
	return (ft_cheak(str1, str2, n));
}

/*int main()
{	
	char s[]="raghad";
	printf("%i\n",ft_memcmp("rgghad",s,3));

	char g[]="raghad";
    printf("%i",memcmp("rgghad",g,3));
}*/
