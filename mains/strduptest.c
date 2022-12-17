/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strduptest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakumar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 09:53:14 by kakumar           #+#    #+#             */
/*   Updated: 2022/10/28 09:59:10 by kakumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
    char source[] = "GeeksForGeeks";
 
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = strdup(source);
 
    printf("%s", target);
    return 0;
}
