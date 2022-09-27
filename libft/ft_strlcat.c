/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <dbelarmi@student.42sp.org.br>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 21:01:45 by coder             #+#    #+#             */
/*   Updated: 2022/09/20 21:30:12 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	temp_dest;
	char 	*str;
	
	temp_dest = ft_strlen(dest);
	str = (char *)src;
	if(size == 0)
		return (ft_strlen(src));
	i = temp_dest;
	if(i >= size)
		return(size + ft_strlen(str));
	j = 0;
	while ((i + 1) < size && str[j] != '\0')
	{
		dest[i] = str[j];
		j++;
		i++;
	}
	dest[i] = '\0'; 
	return(temp_dest + ft_strlen(str));
}
