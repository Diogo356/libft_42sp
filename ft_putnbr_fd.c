/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 20:40:22 by dbelarmi          #+#    #+#             */
/*   Updated: 2022/09/28 20:56:27 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	aux_n;

	aux_n = 0;
	if (n < 0)
	{
		ft_putchar_fd ('-', fd);
		aux_n = -(n);
	}
	else
		aux_n = n;
	if (aux_n >= 10)
		ft_putnbr_fd (aux_n / 10, fd);
	ft_putchar_fd (aux_n % 10 + '0', fd);
}
