/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <dbelarmi@student.42sp.org.br>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:04:17 by coder             #+#    #+#             */
/*   Updated: 2022/09/22 14:26:59 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str_dest;
	int		sd;
	int		i;

	sd = (ft_strlen(s1) + ft_strlen(s2)) + 1;
	str_dest = (char *)malloc(sizeof(char) * (sd));
	if (str_dest == 0)
		return (NULL);
	i = 0;
	sd = 0;
	while (s1[i] != '\0')
	{
		str_dest[sd] = s1[i];
		sd++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		str_dest[sd] = s2[i];
		sd++;
		i++;
	}
	str_dest[sd] = '\0';
	return (str_dest);
}

/*int main(void)
{
	char str01[] = "banana";
	char str02[] = "laranja";

	printf("%s\n", ft_strjoin(str01, str02));
}*/
