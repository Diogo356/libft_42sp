/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 20:41:28 by dbelarmi          #+#    #+#             */
/*   Updated: 2022/09/29 13:54:05 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	char	*str01;
	char	*str02;
	size_t	i;
	size_t	p;

	str01 = (char *)big;
	str02 = (char *)little;
	i = 0;
	if (!little || little[0] == '\0')
		return ((char *)big);
	while (i <= n && str01[i] != '\0')
	{
		p = 0;
		while (i + p < n && str01[i + p] == str02[p] && str01[i + p] != '\0')
		{
			if (str02[p + 1] == '\0')
				return (&str01[i]);
			p++;
		}
		i++;
	}
	return (NULL);
}
