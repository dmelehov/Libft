/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelehov <dmelehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 19:00:42 by dmelehov          #+#    #+#             */
/*   Updated: 2017/05/13 19:01:35 by dmelehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_append(char *s1, char *s2, int i)
{
	char	*res;

	if (s1 != NULL && s2 != NULL)
	{
		if (!(res = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
			return (NULL);
		res = ft_strcat(ft_strcpy(res, s1), s2);
		if (i == 1)
			ft_strdel(&s1);
		if (i == 2)
			ft_strdel(&s2);
		if (i == 3)
		{
			ft_strdel(&s1);
			ft_strdel(&s2);
		}
		return (res);
	}
	return (0);
}
