/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <dbelarmi@student.42sp.org.br>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 23:45:19 by coder             #+#    #+#             */
/*   Updated: 2022/09/20 13:47:13 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*str01;
	char	*str02;
	size_t	i;
	size_t	p;

	str01 = (char *)s1;
	str02 = (char *)s2;
	i = 0;
	if (n == 0 || str02[i] == '\0')
		return (str01);
	while (i < n && str01[i] != '\0')
	{
		p = 0;
		while (str01[i + p] == str02[p] && str01[i + p] != '\0')
		{
			if (str02[p + 1] == '\0')
				return (&str01[i]);
			p++;
		}
		i++;
	}
	return (NULL);
}
