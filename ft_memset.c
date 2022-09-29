/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 20:40:04 by dbelarmi          #+#    #+#             */
/*   Updated: 2022/09/29 14:13:46 by dbelarmi         ###   ########.fr       */
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
	return (dest);
}
