/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlardere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 16:54:51 by rlardere          #+#    #+#             */
/*   Updated: 2018/11/23 16:54:53 by rlardere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strequ(char const *s1, char const *s2)
{
	if (!(s2 && s1))
		return (0);

	while (*s1 == *s2)
	{
		s1++;
		s2++;
		if (!(*s1) && !(*s2))
			return (1);
	}
	return (0);
}