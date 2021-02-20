#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libftprintf.h"
/*
char *reverse_string(const char *s)
{
  char *reversed = (char *)malloc(sizeof(char) * ft_strlen(s));
  int i = 0;
  int length = ft_strlen(s) - 1;
  while (s[i])
  {
    reversed[length] = s[i];
    length--;
    i++;
  }
  
  reversed[i] = '\0';
  return ((char *)reversed);
}

*/

char *from_int_to_lbin(int n)
{
  char *res = (char *)malloc(sizeof(char) * 65);
  int i = 0;
  char neg;

  if (n < 0)
  {
    n = -n;
    neg = '1';
  }
  else 
    neg = '0';

  while (n >  0) 
  {
    if (n % 2 == 0)
      res[i++] = '0'; 
    else 
      res[i++] = '1';
    n /= 2;
  
  }
  while (i < 64) 
    res[i++] = '0';
  
  res[64] = neg;
  res[65] = '\0';
 // printf("s bin %s \n", res);
  return ((char *)reverse_string(res));
}


char *from_int_to_p(int n)
{
  char ref[17] = "0123456789abcdef";
  char *result = (char *)malloc(sizeof(char) * 33);
  int i = 0;

  if (n == 0)
  {
    result[0] = '0';
    result[1] = '\0';
    return ((char *)result);
  } else if (n > 0)
  {
     while (n > 0)
    {
      result[i] = ref[n % 16];
      n = n / 16;
      i++;
    }
  result[i] = '\0';
  } else {
    ft_memcpy(result, 
              neg_hex(reverse_string(
                inverted_plus_one(
                  invert_bin(
                    from_int_to_lbin(n))))), 64);
  }
  return ((char *)ft_strjoin("0x", reverse_string(result)));
}

