/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 22:54:44 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/17 18:20:04 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t size)
{
	unsigned char	*src;
	unsigned char	*dest;

	src = (unsigned char *)from;
	dest = (unsigned char *)to;
	if (size == 0 || from == to)
		return (to);
	if (to < from)
		return (ft_memcpy(dest, src, size));
	else
	{
		src = src + size - 1;
		dest = dest + size - 1;
		while (size--)
			*(dest--) = *(src--);
	}
	return (to);
}
