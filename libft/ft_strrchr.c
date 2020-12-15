/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 10:35:21 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/16 20:57:55 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int		i;
	char	*tmp;
	int		len;

	tmp = (char *)string;
	len = 0;
	while (string[len] != '\0')
		len++;
	i = len;
	while (tmp[i] != (char)c && i > 0)
		i--;
	if (tmp[i] == (char)c)
		return (tmp + i);
	return (NULL);
}
