/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhladche <dhladche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:09:23 by dhladche          #+#    #+#             */
/*   Updated: 2024/09/26 17:34:33 by dhladche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main()
// {
// 	char dest[20];
// 	char src[20] = "Hello World";
// 	ft_strcpy(dest, src);
// 	printf("Copied string: %s\n", dest);
// 	return (0);
// }
