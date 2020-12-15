/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:39:35 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/11 19:26:11 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *string)
{
	int neg;
	int res;

	neg = 1;
	res = 0;
	while (*string == ' ' || *string == '\t' || *string == '\v'
			|| *string == '\f' || *string == '\r' || *string == '\n')
		string++;
	if (*string == '-')
		neg = -1;
	if (*string == '-' || *string == '+')
		string++;
	while (*string >= '0' && *string <= '9')
	{
		res = (res * 10) + (*string - 48);
		string++;
	}
	return (res * neg);
}
