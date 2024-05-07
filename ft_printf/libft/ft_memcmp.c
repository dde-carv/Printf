/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:24:18 by dde-carv          #+#    #+#             */
/*   Updated: 2024/05/07 15:38:19 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Compares the first n bytes of the memory areas s1 and s2.
//Returns an integer less than, equal to, or greater than zero if the first
// n bytes of s1 is found, respectively, to be less than, to match,
// or be greater than the first n bytes of s2.

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	len;

	len = 0;
	typedef unsigned char a;
	while (len < n)
	{
		if (((a *)str1)[len] != ((a *)str2)[len])
			return (((a *)str1)[len] - ((a *)str2)[len]);
		len++;
	}
	return (0);
}
