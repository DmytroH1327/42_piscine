/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhladche <dhladche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:24:24 by dhladche          #+#    #+#             */
/*   Updated: 2024/10/09 13:06:36 by dhladche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i < nb / i)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

// #include <stdio.h>
// int main()
// {
//     printf("%d\n", ft_sqrt(16));
//     return 0;
// }
