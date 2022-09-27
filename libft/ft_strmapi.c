/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:16:58 by dbelarmi          #+#    #+#             */
/*   Updated: 2022/09/26 12:02:37 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
    char *dest;
    size_t i;

    i = 0;
    if (s == 0)
        return (NULL);
    dest = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
    if(dest == 0)
        return (NULL);
    while (s[i])
    {
        dest[i] = f(i, s[i]);
        i++;
    }
    dest[i] = '\0';
    return(dest);
}
