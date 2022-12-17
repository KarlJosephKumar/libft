/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchrtester.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakumar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:50:49 by kakumar           #+#    #+#             */
/*   Updated: 2022/10/26 11:54:35 by kakumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *str = "Helllwoo world";
	char c = 'w';

	printf("str= %s\n", str);
	printf("char= %c\n", c);
   	printf("strchr= %s\n", strchr(str, c));
	printf("ft_strchr= %s\n", ft_strchr(str, c));
	return 0;	
}
