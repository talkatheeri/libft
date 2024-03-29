/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talkathe <talkathe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 22:00:13 by talkathe          #+#    #+#             */
/*   Updated: 2024/01/13 22:00:13 by talkathe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}

// void print_char_with_index(unsigned int i, char* c) {
//     printf("Character at index %u is %c\n", i, *c);
// }

// int main() {
//     char str[] = "Hello, World!";
//     ft_striteri(str, print_char_with_index);
//     return 0;
// }