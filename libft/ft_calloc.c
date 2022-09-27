/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:42:02 by dbelarmi          #+#    #+#             */
/*   Updated: 2022/09/27 17:01:23 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nelem, size_t elsize)
{
    void *p;
    if (nelem == 0 || elsize == 0 || nelem > 2147483647 || elsize > 2147483647)
        return(NULL);
    p = malloc (nelem * elsize);
    if (p == 0)
        return (p);

    ft_bzero (p, nelem * elsize);
    return (p);
}
