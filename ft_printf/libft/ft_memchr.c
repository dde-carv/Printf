/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:24:11 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/26 16:25:49 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Scans  the  initial n bytes of the memory area
// pointed to by s for the first instance of c.
//Return a pointer to the matching byte or
// NULL if the character does not occur in the given memory area.

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	len;

	len = 0;
	typedef unsigned char a;
	while (len < n)
	{
		if (((a *)str)[len] == (a)c)
			return ((void *)(str + len));
		len++;
	}
	return (NULL);
}
