/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshvydka <dshvydka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:03:34 by dshvydka          #+#    #+#             */
/*   Updated: 2024/10/13 14:08:47 by dshvydka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

char	*ft_strchr(const char *str, int chr)
{
	char	ch;

	ch = (char)chr;
	while (*str)
	{
		if (*str == ch)
		{
			return ((char *)str);
		}
		str++;
	}
	if (*str == ch)
	{
		return ((char *)str);
	}
	return (NULL);
}
