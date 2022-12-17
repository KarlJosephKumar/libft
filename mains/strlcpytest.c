/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpytest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakumar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:59:15 by kakumar           #+#    #+#             */
/*   Updated: 2022/11/03 15:16:13 by kakumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
	char dest[100] = "hello";
	char *src = "world";
	char dest1[100] = "hello";
	char *src1 = "world";

	printf("strlcpy %lu\n", strlcpy(dest, src, sizeof(dest)));
	printf("ft_strlcpy %lu\n", ft_strlcpy(dest1, src1, sizeof(dest1)));
	printf("strlcpy %s\n", dest);
	printf("ft_strlcpy %s\n", dest1);

	return (0);
}
