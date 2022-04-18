/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kceylan <kceylan@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:18:36 by kceylan           #+#    #+#             */
/*   Updated: 2022/02/12 18:18:50 by kceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (*s1)
	{
		str[i] = *s1;
		s1++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
