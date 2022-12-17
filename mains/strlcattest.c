/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpytest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakumar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:59:15 by kakumar           #+#    #+#             */
/*   Updated: 2022/11/09 11:58:19 by kakumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
	char	*src = "lorem ipsum dolor sit amet";
	char	*dst1 = "rrrrrrrrrrrrrrr";
	char	*dst2 = "rrrrrrrrrrrrrrr";
	
	printf("strlcat %lu\n", strlcat(dst1, src, 5));
	printf("ft_strlcat %lu\n", ft_strlcat(dst2, src, 5));
	printf("%i\n", strcmp(dst1, dst2));
	printf("strlcat %s\n", dst1);
	printf("ft_strlcat %s\n", dst2);


	return (0);
}
