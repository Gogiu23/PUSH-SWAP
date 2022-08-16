#include "./libft/libft.h"
#include "push_swap.h"

void	ft_checks_ints(t_values pt1, int argc)
{
	int	i;

	i = 0;
	while (i < (argc - 1))
	{
		if (pt1.numbers[i][0] < (INT_MIN) || pt1.numbers[i][0] > (INT_MAX))
		{	
			ft_printf("\n\tError: You are trespassing ints limits.");
			exit(-1);
		}
		i++;
	}
}
