/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 20:15:13 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/11 20:29:09 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *block, size_t size)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = block;
	while (i < size)
	{
		ptr[i] = 0;
		i++;
	}
}
