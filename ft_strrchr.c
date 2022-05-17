/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhadhri <fhadhri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:10:02 by fhadhri           #+#    #+#             */
/*   Updated: 2022/05/17 10:31:19 by fhadhri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{		
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
	i--;
	}
	return (NULL);
}
/*
int main(void)
{
	char s[] = "tripouille";
	int c = 256;

	printf("%p", ft_strrchr(s, c));
	return 0;
}*/
