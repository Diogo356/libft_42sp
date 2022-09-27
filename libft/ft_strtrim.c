/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <dbelarmi@student.42sp.org.br>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:41:57 by coder             #+#    #+#             */
/*   Updated: 2022/09/23 16:36:08 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *dest;
	size_t end;
	int ini;

	ini = 0;
	if(s1[ini] == 0 || set[ini] == 0)
		return(NULL);
	while (s1[ini] && ft_strchr(set, s1[ini]))
		ini++;
	end = ft_strlen(s1);
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]))
		end --;
	dest = (char *)malloc(sizeof(char) * (end - ini + 1));
	if(dest == 0)
		return(NULL);
	ft_strlcpy(dest, &s1[ini], end - ini + 1);
	return(dest);
}
