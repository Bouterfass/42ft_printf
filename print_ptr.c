#include "libftprintf.h"





char			*ft_utop(unsigned long long int nbr)
{
	char					*str;
	unsigned long long int	k;
	unsigned int			len;

	k = nbr;
	len = 1;
	while (k >= 16)
	{
		k /= 16;
		len++;
	}
	len += 2;
	if (!(str = ft_malloczero(len)))
		return (NULL);
	str[0] = '0';
	str[1] = 'x';
	str[len] = 0;
	while (len > 2)
	{
		len--;
		k = nbr % 16;
		nbr /= 16;
		str[len] = k < 10 ? k + 48 : k % 10 + 'a';
	}
	return (str);
}

void			print_ptr(ft_specs *spe, va_list *argptr)
{
	char		*str;
	void		*address;

	address = va_arg(*argptr, void *);
	if (!address) {
		str = "(nil)";
		spe->hzer = 1;
	}
	ft_strncmp(str, "(nil)", 5) == 0 ? spe->prec = 5 : 0;
	ft_strncmp(str, "0x0", 3) == 0 ? spe->prec = 3 : 0;
	if (spe->hzer == 0) 
		str = ft_utop((unsigned long long int)address);
	if (spe->width < ((int)ft_strlen(str) - 2))
		spe->width = 0;
	if (spe->fmin != 1)
		print_not_minus(spe, str);
	else
		print_minus(spe, str);
	if (spe->hzer == 0)
		free(str);
	spe->str++;
}