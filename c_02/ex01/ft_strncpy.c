/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhladche <dhladche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:28:52 by dhladche          #+#    #+#             */
/*   Updated: 2024/09/26 12:54:41 by dhladche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (src[count] != '\0' && count < n)
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

// #include <stdio.h>
// int main()
// {
// 	char dest[20];
// 	char src[24] = "Hello World Hello World";
// 	ft_strncpy(dest, src, 12);
// 	printf("Copied string: %s\n", dest);
// 	return (0);
// }
