/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:22:41 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/29 19:07:34 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_base_size(long unsigned int n, int base_len)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / base_len;
		len++;
	}
	return (len);
}

char	*ft_itoa_base(long unsigned int n, int base_len, char *base)
{
	char	*str;
	int		len;

	len = ft_base_size(n, base_len);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = 48;
	while (n)
	{
		str[len - 1] = base[n % base_len];
		n = n / base_len;
		len--;
	}
	return (str);
}

int	ft_print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += ft_print_str(va_arg(ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_print_num(va_arg(ap, int));
	else if (specifier == 'u')
		count += ft_print_unsi(va_arg(ap, unsigned int));
/* 	else if (specifier == 'p')
		count += ft_print_ptr(va_arg(ap, void *));
	else if (specifier == 'x' || specifier == 'X')
		count += ft_print_hex(va_arg(ap, unsigned int)); */
	else if (specifier == '%')
		count += write(1, "%", 1);
	else
		return(-1);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int	count;
	int	len;

	len = 0;
	count = 0;
	va_start(ap, str);
	while (str[len] != '\0')
	{
		if (str[len] == '%')
		{
			count += ft_print_format(str[len + 1], ap);
			len++;
		}
		else
			count += write(1, &str[len], 1);
		len++;
	}
	va_end(ap);
	return (count);
}

#include <stdio.h>
int	main(void)
{
	char	*str = "Duarte";
	unsigned int	n = 2147483649;

	ft_printf("Hello %s your number is %u.\n", str, n);
	printf("Hello %s your number is %u.\n", str, n);
	return (0);
}
