/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talkathe <talkathe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 21:33:45 by talkathe          #+#    #+#             */
/*   Updated: 2024/01/13 21:33:45 by talkathe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//doesn't check for overflow or null character and when the src and des overlap
void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	char		*destcpy;
	const char	*srcccpy;

	if ((dest == src) || num == 0)
		return (dest);
	if (!dest && !src)
		return (0);
	destcpy = (char *)dest;
	srcccpy = (const char *)src;
	while (num--)
		destcpy[num] = srcccpy[num];
	return (dest);
}
