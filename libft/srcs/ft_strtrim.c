/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriga <jriga@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 20:54:10 by jriga             #+#    #+#             */
/*   Updated: 2025/04/01 15:48:11 by jriga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	trimed_len(char *str, char *set)
{
	size_t	len;
	size_t	t_len;
	size_t	i;

	len = ft_strlen(str);
	i = 0;
	while (ft_ischarset(str[i], set))
		i++;
	t_len = len - i;
	i = 0;
	while (ft_ischarset(str[len - i - 1], set))
		i++;
	return (t_len - i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	len;
	size_t	i;

	i = 0;
	if (!s1)
		return ((char *)malloc(0));
	if (!set)
		return (ft_strdup((char *)s1));
	len = trimed_len((char *)s1, (char *)set);
	while (ft_ischarset(s1[i], (char *)set))
		i++;
	return (ft_substr(s1, i, len));
}

/* #include <stdio.h> */
/* int main(void) */
/* { */
/* 	char *str; */
/**/
/* 	str = ft_strtrim("     hello les amis *())))", "*() "); */
/* 	printf("%s", str); */
/* 	free(str); */
/* } */
