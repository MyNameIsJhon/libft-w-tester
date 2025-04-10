/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriga <jriga@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 17:51:57 by jriga             #+#    #+#             */
/*   Updated: 2025/04/01 15:41:16 by jriga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n && str[i] != (int)c)
		i++;
	if (str[i] == (int)c)
		return ((void *)str + i);
	return (NULL);
}

/* #include <stdio.h> */
/* int main(void) */
/* { */
/* 	char hello[] = "salut mon amis"; */
/* 	printf("%s", (char*)ft_memchr((const void*) hello, (int) 't', 12)); */
/* } */
