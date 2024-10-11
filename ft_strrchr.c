/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshvydka <dshvydka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:04:07 by dshvydka          #+#    #+#             */
/*   Updated: 2024/10/11 17:37:18 by dshvydka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> 

char	*ft_strrchr(const char *str, int chr)
{
	char	ch;
	char	*last;

	last = NULL;
	ch = (char)chr;
	while (*str)
	{
		if (*str == ch)
		{
			last = (char *)str;
		}
		str++;
	}
	if (*str == ch)
	{
		return ((char *)str);
	}
	return (last);
}
