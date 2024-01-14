/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talkathe <talkathe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 21:01:13 by talkathe          #+#    #+#             */
/*   Updated: 2024/01/13 21:01:13 by talkathe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}

// int main() {
//     char c;
//     printf("Enter a character: ");
//     scanf("%c", &c);

//     if (ft_isalpha(c) == 0)
//         printf("%c is not an alphabet.\n", c);
//     else
//         printf("%c is an alphabet.\n", c);

//     return 0;
// }