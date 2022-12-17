/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splittest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakumar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:22:56 by kakumar           #+#    #+#             */
/*   Updated: 2022/11/07 10:49:45 by kakumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <stdio.h>

int main(void)
{
	char *str = "dhsadgsa";
	char **strings;
	char c = 0;
	int i;
	
	i = 4;
	strings = ft_split(str, c);
	while(strings != NULL)
		printf("%s\n", *strings++);
//	printf("%s\n", strings[0]);
	return (0);
}
