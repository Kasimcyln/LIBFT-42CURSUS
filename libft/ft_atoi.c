/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kceylan <kceylan@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:30:28 by kceylan           #+#    #+#             */
/*   Updated: 2022/02/10 15:30:57 by kceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long int	number;
	int				sign;

	number = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (ft_isdigit(*str))
	{
		number = (number * 10) + (*str - '0') * sign;
		str++;
		if (number > 2147483647)
			return (-1);
		if (number < -2147483648)
			return (0);
	}
	return (number);
}
