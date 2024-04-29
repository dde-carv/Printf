/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:45:43 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/29 19:05:11 by dde-carv         ###   ########.fr       */
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

int	ft_print_unsi(unsigned int n)
{
	char	*ptr;
	int	len;

	ptr = ft_itoa_base(n, 10, "0123456789");
	len = ft_print_str(ptr);
	free (ptr);
	return (len);
}
