/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjointest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakumar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:29:52 by kakumar           #+#    #+#             */
/*   Updated: 2022/10/28 10:33:46 by kakumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char	*str1 = "Hello";
	char	*str2 = " there!";
	char	*res;

	res = ft_strjoin(str1, str2);
	printf("%s", res);
	return 0;
}
