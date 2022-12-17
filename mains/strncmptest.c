/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmptest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakumar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:09:59 by kakumar           #+#    #+#             */
/*   Updated: 2022/11/05 10:02:38 by kakumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include "../libft.h"


int main () {
   char *str1 = "abcdefgh";
   char *str2 = "";
   int result;
   int res2;

   res2 = strncmp(str1, str2, 0);
   result = ft_strncmp(str1, str2, 0);

   if(result > 0) {
      printf("ASCII value of first unmatched character of str1 is greater than str2\n");
   } else if(result < 0) {
      printf("ASCII value of first unmatched character of str1 is less than str2\n");
   } else {
      printf("Both the ft_strncmp strings str1 and str2 are equal\n");
   }
   if(res2 > 0) {
      printf("ASCII value of first unmatched character of str1 is greater than str2");
   } else if(res2 < 0) {
      printf("ASCII value of first unmatched character of str1 is less than str2");
   } else {
      printf("Both the strncmp strings str1 and str2 are equal");
   }


   return 0;
}
