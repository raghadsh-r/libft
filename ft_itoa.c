/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 08:30:34 by ralshraw          #+#    #+#             */
/*   Updated: 2026/09/30 09:33:51 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_count(long nb, int *c)
{
	if (nb >= 10)
		ft_putnbr_count(nb / 10, c);
	(*c)++;
}

static void	full_thearrey(char *s, long nb, int index)
{
	char	b;

	b = (nb % 10) + '0';
	if (nb >= 10 && index >= 0)
	{
		full_thearrey(s, nb / 10, index - 1);
	}
	s[index] = b;
}

static void	for_negtive(char *p, long nb, int i)
{
	p[0] = '-';
	full_thearrey(p, nb, i);
	p[i + 1] = '\0';
}

char	*ft_itoa(int n)
{
	int		i;
	int		f;
	long	nb;
	char	*p;

	i = 0;
	f = 0;
	nb = n;
	if (n < 0)
	{
		nb *= -1;
		f = 1;
	}
	ft_putnbr_count(nb, &i);
	p = malloc(sizeof(char) * (i + 1 + f));
	if (!p)
		return (NULL);
	if (f == 1)
	{
		for_negtive(p, nb, i);
		return (p);
	}
	full_thearrey(p, nb, i - 1);
	p[i] = '\0';
	return (p);
}

/*int main()
{
    int p;
    int *c;
    p = 0;
    c = &p;
   // int *x = ft_putnbr_count(0,c);
    //printf("\n tt%i",p);
   char *r;
   r = ft_itoa(-22);
   printf("%s",r);
}*/
