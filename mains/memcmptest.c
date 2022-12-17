/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmptest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakumar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:28:14 by kakumar           #+#    #+#             */
/*   Updated: 2022/10/28 10:14:55 by kakumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str1 = "Heloo Wo Wn Woorld";
	char *str2 = "Heloo Wo Wo Woorld";
	size_t n = 10;

	printf("memcmp= %i\n", memcmp(str1, str2, n));
	printf("ft_memcmp= %i\n", ft_memcmp(str1, str2, n));

	return (0);
}
