/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 20:41:44 by dbelarmi          #+#    #+#             */
/*   Updated: 2022/09/29 13:13:39 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*dest;
	size_t		end;
	size_t		ini;

	ini = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[ini] && ft_strchr(set, s1[ini]))
		ini++;
	end = ft_strlen(s1);
	while (ini < end && ft_strchr(set, s1[end - 1]))
		end--;
	dest = (char *)malloc(sizeof(char) * (end - ini + 1));
	if (dest == 0)
		return (NULL);
	ft_strlcpy(dest, &s1[ini], end - ini + 1);
	return (dest);
}
