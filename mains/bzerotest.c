/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzerotest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakumar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:12:27 by kakumar           #+#    #+#             */
/*   Updated: 2022/11/07 08:57:54 by kakumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main()
{
    char str[50] = "Testing this string";
    char str1[50] = "Testing this string";
    printf("\nBefore ft_bzero(): %s\n", str);
    printf("\nBefore bzero(): %s\n", str1);

    // Fill 8 characters starting from str[13] with '.'
   	bzero(str1 + 6, 8*sizeof(char));
	ft_bzero(str + 6, 8*sizeof(char));

	printf("After ft_bzero():  %s\n", str);
	printf("After bzero():  %s", str1);
    return 0;
}
