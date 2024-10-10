/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhladche <dhladche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:49:27 by dhladche          #+#    #+#             */
/*   Updated: 2024/09/25 10:11:48 by dhladche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int main(void)
// {
// 	int x = 10;
// 	int y = 20;
// 	printf("Before swapping: x=%d y=%d\n", x, y);
// 	ft_swap(&x, &y);
// 	printf("After swapping: x=%d y=%d\n", x, y);
// 	return 0;
// }
