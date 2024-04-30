/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:17:29 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/30 12:23:12 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_print_char(char c);
int		ft_print_str(char *str);
int		ft_print_num(int n);
int		ft_print_unsi(unsigned int n);
int		ft_print_ptr(long unsigned int n);
int		ft_print_hex_lo(unsigned int n);
int		ft_print_hex_up(unsigned int n);
char	*ft_itoa_base(long unsigned int n, int base_len, char *base);
int		ft_base_size(long unsigned int n, int base_len);

#endif
