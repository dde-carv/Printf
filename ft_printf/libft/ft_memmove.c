/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:24:41 by dde-carv          #+#    #+#             */
/*   Updated: 2024/05/07 15:38:27 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Copies n bytes from memory area src to memory area dest.
// The memory areas may overlap.
//Returns a pointer to dest.

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	typedef unsigned char a;
	if (src == NULL && dest == NULL)
		return (dest);
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			*((a *)dest + n) = *((a *)src + n);
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
