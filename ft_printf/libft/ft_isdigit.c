/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:40:52 by dde-carv          #+#    #+#             */
/*   Updated: 2024/05/10 18:19:08 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Checks for a digit (0 - 9).
//The values returned are nonzero if the character
// c falls into the tested class, and zero if not.

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (42);
	else
		return (0);
}
