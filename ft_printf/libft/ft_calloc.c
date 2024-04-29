/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:36:07 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/26 16:21:16 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates size bytes and returns a pointer to the allocated  memory.
// The memory is not initialized.
// Return a pointer to  the  allocated memory.
// On error, return NULL.

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	bytes;
	void	*arr;

	bytes = nmemb * size;
	if (size && (bytes / size) != nmemb)
		return (NULL);
	arr = malloc(bytes);
	if (!arr)
		return (NULL);
	ft_bzero(arr, bytes);
	return (arr);
}
