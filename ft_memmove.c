/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 20:39:59 by dbelarmi          #+#    #+#             */
/*   Updated: 2022/09/29 18:11:09 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t					i;
	const unsigned char		*temp;
	unsigned char			*aux_dest;

	temp = (const unsigned char *)src;
	aux_dest = (unsigned char *)dest;
	i = 0;
	if ((!temp && !aux_dest) || !n)
		return (dest);
	if (src > dest)
		return (ft_memcpy(dest, src, n));
	while (n-- > 0)
		aux_dest[n] = temp[n];
	return (dest);
}
