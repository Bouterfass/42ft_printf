#include "libftprintf.h"

void			print_percent(ft_specs *spe)
{
	if (IS_MACOS) {
		set_spec(0, 0, spe);
		if (spe->fmin == 1)
		{
			spe->printed += ft_fill('%', 1);
			print_width(spe, 1);
		}
		else
		{
			print_width(spe, 1);
			spe->printed += ft_fill('%', 1);
		}
	}
	else
		spe->printed += ft_fill('%', 1);
	spe->str++;
}