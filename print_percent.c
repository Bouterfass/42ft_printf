#include "libftprintf.h"

void			print_percent(ft_specs *spe)
{

		remap_flags(0, 0, spe);
		if (spe->fmin == 1)
		{
			spe->read += ft_fill('%', 1);
			print_width(spe, 1);
		}
		else
		{
			print_width(spe, 1);
			spe->read += ft_fill('%', 1);
		}
	spe->str++;
}