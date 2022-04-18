/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kceylan <kceylan@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:07:03 by kceylan           #+#    #+#             */
/*   Updated: 2022/02/14 15:07:05 by kceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t		idx;
	size_t		count;

	idx = 0;
	count = 0;
	if (!dest || !src)
		return (0);
	while (src[count])
		count++;
	while (src[idx] && idx + 1 < size)
	{
		dest[idx] = src[idx];
		idx++;
	}
	if (size)
		dest[idx] = '\0';
	return (count);
}
