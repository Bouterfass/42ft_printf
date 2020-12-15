/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 20:36:45 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/17 18:17:48 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, void *from, size_t size)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	if (!to && !from)
		return (0);
	s = (unsigned char *)from;
	d = (unsigned char *)to;
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
