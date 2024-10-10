/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhladche <dhladche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 08:56:06 by dhladche          #+#    #+#             */
/*   Updated: 2024/09/25 09:51:20 by dhladche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int main(void)
// {
// 	int x = 15;
// 	int y = 7;
// 	printf("Before: x = %d, y = %d\n", x, y);
//     ft_ultimate_div_mod(&x, &y);
//     printf("After: x = %d (result of division), y = %d (remainder)\n", x, y);
// }
