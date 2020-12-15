/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 09:25:06 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/16 20:00:32 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	int		i;
	char	*tmp;
	char	tmp2;

	i = 0;
	tmp = (char *)string;
	tmp2 = (char)c;
	while (tmp[i] != '\0')
	{
		if (tmp[i] == (char)c)
			return (tmp + i);
		i++;
	}
	if (tmp2 == '\0')
		return (tmp + i);
	return (NULL);
}
