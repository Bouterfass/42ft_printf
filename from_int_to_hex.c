#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libftprintf.h"
/*

    - % [indicateurs] [largeur] [.précision] [taille] type

    - [indicateurs] (optionnel) contient : 
                - '-' : Aligner à gauche le résultat selon la largeur du champs donnée.
                - '+' : Utiliser un signe (+ ou -) pour préfixer la valeur de sortie s'il s'agit d'un 
                        type signé.
                - '0' : 
  https://github.com/Himak1/ft_printf
  https://github.com/tcynthia/ft_printf/blob/master/receiver/rec_unsi.c
*/

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



char *from_int_to_bin(int n)
{
  char *res = (char *)malloc(sizeof(char) * 33);
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
  while (i < 32) 
    res[i++] = '0';
  
  res[32] = neg;
  res[33] = '\0';
 // printf("s bin %s \n", res);
  return ((char *)reverse_string(res));
}


char *invert_bin(const char* s)
{
  char *inverted; 
  int i;

  inverted = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
  i = 0;

  while (s[i])
  {
    if (s[i] == '1')
      inverted[i] = '0';
    else
      inverted[i] = '1';
    i++;
  }
  inverted[i] = '\0';
 // printf("s inverted %s \n", inverted);
  return ((char *)inverted);
}

char *inverted_plus_one(char *inverted)
{
  char *result; 
  int i;
  int j;

  result = (char *)malloc(sizeof(char) * ft_strlen(inverted));
  i = ft_strlen(inverted) - 1;
  j = 0;

  if (inverted[i] == '1')
  {

    while (inverted[i] == '1')
    {
      result[j] = '0';
      j++;
      i--;
    }
  }

  result[j] = '1';

  while(i >= 0)
  {
    j++; 
    i--;
    result[j] = inverted[i];
  }
  result[j] = '\0';
 // printf("s inverted plus one %s \n", result);
  return ((char *)reverse_string(result));
}


char *neg_hex(const char * s)
{
    char *res;
    size_t i;
    int j;
    int tmp;
    int stock;
    char ref[17] = "0123456789abcdef";
   // printf("s inverted plus one %s \n", s);
    res = (char *)malloc( sizeof(char) * (ft_strlen(s) / 4) + 1);
    i = 0;
    j = 0;
    tmp = 1;
    stock = 0;
    
    while (i <= ft_strlen(s) - 2)
    {
      
      if (s[i] == '1')
        stock += tmp;
      tmp *= 2;
      if (((i + 1) % 4) == 0)
      {
        //printf("stock %d\n", stock);
        res[j] = ref[stock];    
        tmp = 1;
        stock = 0;
        j++;
      }
      i++;
    }
  
  res[j] = '\0';
  return ((char *)res);
}


char *from_int_to_hex(int n)
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
                    from_int_to_bin(n))))), 32);
  }
  return ((char *)reverse_string(result));
}

