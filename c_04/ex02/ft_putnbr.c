/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhladche <dhladche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:25:20 by dhladche          #+#    #+#             */
/*   Updated: 2024/10/05 15:16:20 by dhladche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nb1;

	nb1 = nb;
	if (nb1 < 0)
	{
		nb1 = -nb1;
		ft_putchar('-');
	}
	if (nb1 >= 10)
		ft_putnbr(nb1 / 10);
	ft_putchar('0' + (nb1 % 10));
}

// int	main(void)
// {
// 	ft_putnbr(42);
// 	return (0);
// }
