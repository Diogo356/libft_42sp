/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:38:02 by coder             #+#    #+#             */
/*   Updated: 2022/09/27 15:39:17 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_split_count(char const *s, char c)
{
    int count;
    int i;

    count = 0;
    i = 0;
    if(s[i] == 0)
        return (0);
    while (s[i])
    {
        if (i == 0 && s[i] == c)
            i++;
        if(s[i] != c && s[i + 1] == c)
            count++;
        if (s[i] != c && s[i + 1] == '\0')
            count++;
        i++;
    }
    return(count);
    
}

char **ft_split(char const *s, char c)
{
    int     to_cpy;
    int     i;
    int     i_tab;
    char    **tab;

    i = 0;
    to_cpy = 0;
    i_tab = 0;
    tab = (char **)malloc(sizeof(char *) * (ft_split_count(s, c) + 1));
    while (s[i] && s[i] == c)
        i++;
    while (i > to_cpy)
    {
        tab[i_tab] = ft_substr(s, to_cpy, i - to_cpy);
        i_tab++;
    }
    tab[i_tab] = NULL;
    return (tab);
}