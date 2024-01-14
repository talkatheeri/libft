/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talkathe <talkathe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 21:30:15 by talkathe          #+#    #+#             */
/*   Updated: 2024/01/13 21:30:15 by talkathe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		del;
	unsigned char		*destcpy;
	const unsigned char	*srcccpy;
	size_t				i;

	del = (unsigned char)c;
	destcpy = (unsigned char *)dest;
	srcccpy = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		destcpy[i] = srcccpy[i];
		if (srcccpy[i] == del)
			return (dest + i + 1);
		i++;
	}
	return (0);
}
