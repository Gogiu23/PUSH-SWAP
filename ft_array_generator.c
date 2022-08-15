#include "./libft/libft.h"
#include "push_swap.h"

t_values	ft_array_generator(int argc, int i, int count, char **argv)
{
	t_values  lenght;
	t_values  pt1;
	
	lenght.lenght = argc -1;
	pt1.numbers = (int **)malloc(sizeof(int *) * argc);
	if (!pt1.numbers)
		ft_free(pt1, count);
	pt1.numbers[argc - 1] = 0;
	while (count < lenght.lenght)
	{
		pt1.numbers[count] = (int *)malloc(sizeof(int) * 3);
		if (!pt1.numbers[count])
		{
			ft_free(pt1, count);
			free(pt1.numbers);
			break;
		}
		pt1.numbers[count][0] = ft_atoi(argv[i]);
		pt1.numbers[count][2] = 0;
		count++;
		i++;
	}
	return (pt1);
}
