/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 12:29:55 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/11 17:16:03 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		*my_memset(void *block, int c, size_t size)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = block;
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return ((void*)block);
}

void			*ft_calloc(size_t count, size_t eltsize)
{
	size_t	size;
	void	*value;

	size = count * eltsize;
	value = malloc(size);
	if (!value)
		return (NULL);
	my_memset(value, 0, size);
	return (value);
}
