/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memsettest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakumar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:19:39 by kakumar           #+#    #+#             */
/*   Updated: 2022/10/25 14:31:37 by kakumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
int main()
{
	size_t i;

	i = (8*sizeof(char));
    char str[50] = "Testing on this sentence..";
 	char str1[50] = "Testing on this sentence..";
    printf("Before ft_memset(): %s\n", str);
	printf("Before memset(): %s\n", str1);
    memset(str1 + 13, 1, 8*sizeof(char));;
    ft_memset(str + 13, 1, 8*sizeof(char));

    printf("After ft_memset():  %s\n", str);
    printf("After memset():  %s\n", str1);
    return 0;
}
