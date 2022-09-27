/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <dbelarmi@student.42sp.org.br>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 22:33:21 by coder             #+#    #+#             */
/*   Updated: 2022/09/20 14:09:16 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	if (n >= 0)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)s)[i] = '\0';
			i++;
		}		
	}
}