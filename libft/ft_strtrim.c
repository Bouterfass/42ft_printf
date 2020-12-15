/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 18:34:19 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/17 18:19:18 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_in_set(char const c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*new_s1;
	int		deb;
	int		fin;
	int		len;

	if (!s1 || !set)
		return (NULL);
	deb = 0;
	fin = ft_strlen(s1) - 1;
	while (is_in_set(s1[deb], set) && s1[deb])
		deb++;
	if (!s1[deb])
		return (ft_strdup(s1 + deb));
	while (is_in_set(s1[fin], set))
		fin--;
	len = (fin - deb) + 1;
	new_s1 = ft_substr(s1, deb, len);
	return (new_s1);
}
