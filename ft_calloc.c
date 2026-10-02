/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 09:55:23 by ralshraw          #+#    #+#             */
/*   Updated: 2026/09/28 09:16:56 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	if (!nmemb || !size)
	{
		str = malloc(nmemb * size);
		if (!str)
			return (NULL);
		return (str);
	}
	if ((SIZE_MAX / size < nmemb))
		return (NULL);
	str = malloc(nmemb * size);
	if (!str)
		return (NULL);
	ft_bzero(str, nmemb * size);
	return (str);
}

/*int main ()
{
	//char *s;	
	//s = ft_calloc(2,sizeof(char));
	//printf("%s\n",s);
	char *r;    
    	r = ft_calloc(-1,-1);
	free(r);
    	printf("EEEE%i",r);


}*/
