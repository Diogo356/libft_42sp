/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <dbelarmi@student.42sp.org.br>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 19:31:23 by coder             #+#    #+#             */
/*   Updated: 2022/09/20 16:51:56 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t            i;
    const unsigned char    *temp;
    unsigned char    *aux_dest;

    temp = (const unsigned char *)src;
    aux_dest = (unsigned char *)dest;
    i = 0;
    if ((temp == 0 && aux_dest == 0) || n == 0)
        return (dest);
    while (n--)
    {
        aux_dest[n] = temp[n];
    }
    return (dest);
}
