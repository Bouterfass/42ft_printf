/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 21:03:17 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/16 20:09:37 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *to, void *from, int c, size_t size)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	s = (unsigned char *)from;
	d = (unsigned char *)to;
	while (i < size)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
			return (to + i + 1);
		i++;
	}
	return (NULL);
}
