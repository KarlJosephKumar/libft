#include <stdio.h>
#include <string.h>
#include "../../libft_Finalcommit/libft.h"
int main ()
{
  char *str1 = "herpaderpa";
 // char str2[] = "wub";
  char *str3 = "herpaderpa";
//  char str4[] = "wub";

  puts("str1 before memcpy: ");
  puts(str1);

  /* Copies contents of str2 to str1 */
  memcpy (str1+1, str1, ft_strlen(str1) +1);

  puts("str1 after memcpy: ");
  puts(str1);
    
  puts("str3 before ft memcpy ");
  puts(str3);

  /* Copies contents of str2 to str1 */
  ft_memcpy (str3+1, str3, ft_strlen(str3) + 1);

  puts("str4 after ft memcpy: ");
  puts(str3);

  return 0;
}

