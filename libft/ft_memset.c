/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <dbelarmi@student.42sp.org.br>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 00:48:30 by coder             #+#    #+#             */
/*   Updated: 2022/09/20 15:39:36 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	size_t	count;

	if (n <= 0)
		return (NULL);
	count = 0;
	while (count < n)
	{
		((unsigned char *)dest)[count] = (unsigned char)c;
		count++;
	}
	((unsigned char *)dest)[count] = '\0';
	return (dest);
}
