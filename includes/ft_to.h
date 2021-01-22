/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 14:25:08 by jberredj          #+#    #+#             */
/*   Updated: 2021/01/22 16:03:34 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TO_H
# define FT_TO_H
# include <stdlib.h>
# include "ft_ctype.h"
# include "ft_string.h"

int		ft_atoi(const char *str);
char	*ft_itoa(int n);
size_t	ft_intlen(int n);
size_t	ft_intlen_base(int n, int base);
char	*ft_lltoa(long long n);
size_t	ft_lllen(long long n);
size_t	ft_lllen_base(long long n, int base);
char	*ft_uitoa(unsigned int n);
size_t	ft_uintlen(unsigned int n);
char	*ft_ulltoa(unsigned long long n);
size_t	ft_ulllen(unsigned long long n);
int		ft_tolower(int c);
int		ft_toupper(int c);
#endif