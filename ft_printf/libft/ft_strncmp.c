/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:25:27 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/26 16:30:34 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Compares the first nbytes of the strings s1 and s2.

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	len = 0;
	typedef unsigned char a;
	if (n == 0)
		return (0);
	while (s1[len] && s2[len] && s1[len] == s2[len] && n > 1)
	{
		len++;
		n--;
	}
	return ((a)s1[len] - (a)s2[len]);
}
