/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshvydka <dshvydka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:40:24 by dshvydka          #+#    #+#             */
/*   Updated: 2024/10/29 16:59:25 by dshvydka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// allocates and returns a concat of s1&s2 as a new string
char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*s;
	int				s1_length;
	int				s2_length;
	unsigned int	s_length;

	s1_length = ft_strlen(s1);
	s2_length = ft_strlen(s2);
	s_length = s1_length + s2_length;
	s = (char *)malloc(s1_length + s2_length + 1);
	if (s == NULL)
		return (NULL);
	ft_strlcpy(s, s1, s1_length + 1);
	ft_strlcat(s, s2, s_length + 1);
	return (s);
}
