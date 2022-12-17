/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   touppertester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakumar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:31:37 by kakumar           #+#    #+#             */
/*   Updated: 2022/10/25 12:01:45 by kakumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
    char c;
    char z;

    z = 'A';
    c = 'A';
    
    printf("before toupper %c\n", z);
    printf("before ft_toupper %c\n", c);
    printf("after toupper %c\n", tolower(z));
    printf("after ft_toupper %c\n", ft_tolower(c));
    return (0);
}
