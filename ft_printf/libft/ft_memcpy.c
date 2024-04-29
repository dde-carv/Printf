/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:24:24 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/26 16:26:11 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Copies n bytes from memory area src to memory area dest.
// The memory areas must not overlap.
//Returns a pointer to dest.

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	len;

	len = 0;
	typedef unsigned char a;
	if (!dest && !src)
		return (NULL);
	while (len < n)
	{
		((a *)dest)[len] = ((a *)src)[len];
		len++;
	}
	return (dest);
}