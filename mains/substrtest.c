/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substrtest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakumar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:13:40 by kakumar           #+#    #+#             */
/*   Updated: 2022/11/02 15:02:33 by kakumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int main(void)
{
	char *s = "12345abc";
	char *str;
	unsigned int start = 0;
	size_t len = ft_strlen(s);

	str = ft_substr(s, start, len);
	printf("str .. %s\n", str);
	if(!strcmp(s, str))
		printf("strncmp .. %d\n", strcmp(str, s));
	return (0);
}
