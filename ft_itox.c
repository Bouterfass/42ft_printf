#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libftprintf.h"


unsigned int			ft_xlen(unsigned int n)
{
	unsigned int len;

	len = 1;
	while (n >= 16)
	{
		n = n / 16;
		len++;
	}
	return (len);
}


char			*ft_itox(unsigned int nbr, ft_specs *spe)
{
	char					*str;
	unsigned int			k;
	unsigned int			len;

	k = nbr;
	len = ft_xlen(k);
	if (!(str = ft_malloczero(len)))
		return (NULL);
	str[len] = 0;
	while (nbr)
	{
		len--;
		k = nbr % 16;
		nbr /= 16;
		str[len] = k < 10 ? k + 48 : k % 10 + *spe->str - 23;
	}
	return (str);
}
