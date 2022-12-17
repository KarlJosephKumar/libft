/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchrtest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakumar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:16:58 by kakumar           #+#    #+#             */
/*   Updated: 2022/10/27 09:22:08 by kakumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str = "Helloo Wo Wo Woorld";
	char c = 'W';
	size_t n = 7;

	printf("memchr= %s\n", memchr(str, c, n));
	printf("ft_memchr= %s\n", ft_memchr(str, c, n));

	return (0);
}
