/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:45:43 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/29 18:04:18 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_num(int n)
{
	char	*s;
	int	len;

	ft_putnbr_fd(n, 1);
	s = ft_itoa(n);
	len = ft_strlen(s);
	free(s);
	return (len);
}

