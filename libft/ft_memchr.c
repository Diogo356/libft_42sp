/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <dbelarmi@student.42sp.org.br>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:20:58 by coder             #+#    #+#             */
/*   Updated: 2022/09/20 13:53:05 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	i = 0;
	while (n)
	{
		if (str[i] == (unsigned char)c)
			return (&((void *)str)[i]);
		i++;
		n--;
	}
	return (NULL);
}
