#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "./libft/libft.h"
#include "libftprintf.h"


/*

    - % [indicateurs] [largeur] [.précision] [taille] type

    - [indicateurs] (optionnel) contient : 
                - '-' : Aligner à gauche le résultat selon la largeur du champs donnée.
                - '+' : Utiliser un signe (+ ou -) pour préfixer la valeur de sortie s'il s'agit d'un 
                        type signé.
                - '0' : 
  https://github.com/Himak1/ft_printf



void	*ft_malloczero(size_t size)
{
	void	*dest;

	if ((dest = malloc(size)))
		ft_bzero(dest, size);
	return (dest);
} 


int main (){

  ft_specs *spe; 
  
  spe = (ft_specs *)ft_malloczero(sizeof(ft_specs));
  
  ft_init_spec(spe);
  ft_get_str(spe, "je suids un %000%c", 12);

  

  printf("str %s\n", spe->str);
  printf("flag %d\n", spe->flag);
  printf("width %d\n", spe->width);
  printf("prec %d\n", spe->prec);
  printf("size %d\n", spe->size);
  printf("type %d\n", spe->type);
  


//  printf("jusquou le i -> %d\n", ft_speclen("Saslut%les amis", 5));

  return (0);
}*/

/*
int main ()
{
  
  printf("%p\n", (void *)-12345);
  return (0);
}*/