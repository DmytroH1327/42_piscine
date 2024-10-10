/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhladche <dhladche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:20:29 by dhladche          #+#    #+#             */
/*   Updated: 2024/09/25 10:12:21 by dhladche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	a;
	int	z;

	a = 0;
	z = size - 1;
	while (a < z)
	{
		temp = tab[a];
		tab[a] = tab[z];
		tab[z] = temp;
		a++;
		z--;
	}
}

// int main(void)
// {
// 	int array[] = {1, 2, 3, 4, 5};
// 	int size = 5;
// 	printf("Array before reverse:\n");
// 	int i = 0;
// 	while (i < size)
//     {
// 		printf("%d ", array[i]);
// 		i++;
//     }
//     printf("\n");
// 	ft_rev_int_tab(array, size);
// 	printf("Array after reverse:\n");
// 	i = 0;
// 	while (i < size)
//     {
// 		printf("%d ", array[i]);
// 		i++;
//     }
//     printf("\n");
// 	return (0);
// }
