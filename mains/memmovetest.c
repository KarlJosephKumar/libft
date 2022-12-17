/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmovetest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakumar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:35:47 by kakumar           #+#    #+#             */
/*   Updated: 2022/10/27 11:31:13 by kakumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char str[50] = "I am going from Delhi to Gorakhpur";
    printf( "Function:\tft_memmove with overlap\n" );
    printf( "Orignal :\t%s\n",str);
    printf( "Source:\t\t%s\n", str + 5 );
    printf( "Destination:\t%s\n", str + 11 );
    memmove( str + 1, str, 29 );
    printf( "Result:\t\t%s\n", str );
    return 0;
}
