/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriga <jriga@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 09:54:48 by jriga             #+#    #+#             */
/*   Updated: 2025/04/02 13:51:28 by jriga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if (!haystack || *haystack == '\0')
		return ((char *) 0);
	while (haystack[i] && len--)
	{
		while (haystack[i + y] == needle[y] && needle[y])
			y++;
		if (needle[y] == '\0')
			return ((char *)(haystack + i));
		i++;
		y = 0;
	}
	return (NULL);
}

/* #include <stdio.h> */
/* int main(void) */
/* { */
/* 	char str[] = "salut les amis"; */
/* 	printf("%s", ft_strnstr(str, "ut", 10)); */
/* } */
