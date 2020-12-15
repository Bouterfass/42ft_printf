/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 17:42:35 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/11 17:56:05 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		max_length(char const *s1, char const *s2)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while (s1[i])
		i++;
	len = i;
	i = 0;
	while (s2[i])
		i++;
	len = len + i;
	return (len);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	int		lenmax;
	char	*s3;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	lenmax = max_length(s1, s2);
	s3 = NULL;
	i = -1;
	j = 0;
	if (!(s3 = (char*)malloc(sizeof(char) * (lenmax + 1))))
		return (NULL);
	while (s1[++i])
		s3[j++] = s1[i];
	i = -1;
	while (s2[++i])
		s3[j++] = s2[i];
	s3[j] = '\0';
	return (s3);
}
