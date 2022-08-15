#include "./libft/libft.h"
#include "push_swap.h"

char	ft_checks_args(int argc, char **argv)
{
	int	checks;

	checks = argc -1;
	while (checks > 0)
	{
		if (*argv[checks] < '0' || *argv[checks] > '9')
		{
			ft_printf("\n\tError: the characters passed are not integers\n");
			break ;
		}
		checks--;
	}
	if (argc <= 2)
	{
		ft_printf("\n\tError: fewer args than allowed (min 2 integers)\n");
		return (0);
	}
	return (**argv);
}
