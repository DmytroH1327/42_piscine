/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhladche <dhladche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 09:13:38 by dhladche          #+#    #+#             */
/*   Updated: 2024/09/25 10:49:23 by dhladche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	swap;

	swap = 1;
	while (swap)
	{
		swap = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				swap = 1;
			}
			i++;
		}
		size--;
	}
}

// int main(void)
// {
// 	int array[] = {5, 3, 1, 4, 2};
//     int size = 5;
// 	printf("Array before sorting:\n");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", array[i]);
//     }
//     printf("\n");
//     ft_sort_int_tab(array, size);
//     printf("Array after sorting:\n");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", array[i]);
//     }
//     printf("\n");
//     return 0;
// }
