int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	x = ft_iterative_factorial(5);
// 	printf("%d", x);
// }
