/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstrtest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakumar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:58:44 by kakumar           #+#    #+#             */
/*   Updated: 2022/11/07 11:46:27 by kakumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../libft/libft.h"

int	main(void)
{
	char *haystack = "aaabcabcd";
//	char *needle = "aabc";
//	size_t len = ft_strlen(haystack);

	printf("the ft_strnstr - %s\n", ft_strnstr(haystack, "abcd", 9));
	printf("the strnstr - %s\n", strnstr(haystack, "abcd", 9));
	return 0;
}
