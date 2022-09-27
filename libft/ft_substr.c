/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:53:13 by dbelarmi          #+#    #+#             */
/*   Updated: 2022/09/27 16:09:30 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  len_s;
    char    *dest;

    if(s == 0)
        return(NULL);
    len_s = ft_strlen(s);
    if (len_s <= len)
        len = len_s - start;
    if (start > len_s)
        return(ft_strdup(""));
    dest = (char *)malloc(sizeof(char) * (len + 1));
    if (dest == 0)
        return (NULL);
    ft_strlcpy(dest, (char *)s + start, len + 1);
    return(dest);    
}