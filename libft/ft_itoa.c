/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 19:31:34 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/18 14:59:22 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(unsigned int n, size_t len)
{
	if (n == 0 && !len)
		return (1);
	else if (n == 0)
		return (len);
	return (get_len((n / 10), len + 1));
}

char			*ft_itoa(int n)
{
	char			*tab;
	size_t			size;
	unsigned int	nbr;

	nbr = (n < 0) ? -n : n;
	size = get_len(nbr, (n < 0) ? 1 : 0);
	if (!(tab = (char *)malloc(size + 1)))
		return (NULL);
	if (n < 0)
		tab[0] = '-';
	tab[size] = 0;
	while (size-- > 1)
	{
		tab[size] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (n >= 0)
		tab[0] = nbr + '0';
	return (tab);
}
