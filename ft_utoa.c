#include "libftprintf.h"
#include <stdio.h>


char	*ft_utoa(unsigned int nbr)
{
	char			*str;
	unsigned int	k;
	int				len;

	k = nbr;
	len = 1;
	while (k >= 10)
	{
		k /= 10;
		len++;
	}
	if (!(str = ft_malloczero(len)))
		return (NULL);
	str[len] = 0;
	while (nbr >= 10)
	{
		len--;
		str[len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	len--;
	str[len] = nbr % 10 + '0';
	return (str);
}