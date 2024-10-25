/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshvydka <dshvydka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:23:01 by dshvydka          #+#    #+#             */
/*   Updated: 2024/10/25 17:41:55 by dshvydka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//finds the first occorance of specific byte in a block of memory
// asdklasdhlas asd alsdjlasfj akf aklsfjaklfjsaf asldj
void	*ft_memchr(const void *s, int c, size_t count)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < count)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
