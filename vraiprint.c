#include <stdio.h>


/* 
    - % [indicateurs] [largeur] [.précision] [taille] type

    - [indicateurs] (optionnel) contient : 
                - '-' : Aligner à gauche le résultat selon la largeur du champs donnée.
                - '+' : Utiliser un signe (+ ou -) pour préfixer la valeur de sortie s'il s'agit d'un 
                        type signé.
                - '0' : 
*/


int main()
{
/* %d */
  //printf("%5d\n", 4); // affiche "    4"
  //printf("%-5d\n", 4); // affiche "4    "
  //printf("% 5d\n", 4); // affiche "    4"
  //printf("%d\n", 4); // affiche "4"
  //printf("%05d\n", 4); // affiche "00004"
  //printf("%05.d\n", 4); // affiche "    4"
  //printf("% d\n", 4); // affiche " 4"
  //printf("%     d\n", 4); // affiche " 4"
  //printf("%   +d\n", 4); // affiche "+4"
  //printf("%   -d\n", 4); // affiche " 4"
  //printf("%0*d\n", 5, 3); // affiche "00003" 
  //printf("%d\n", 3.123); // affiche "-159371752" (WTF)

/* %s */
  //printf("%s\n", "a"); // affiche "a"
  //printf("%5s\n", "a"); // affiche "    a"
  //printf("%05s\n", "a"); // affiche "    a"
  //printf("%-5s\n", "a"); // affiche "a    "


/* %f */
    //printf("%.f\n", 4.0); // affiche "4"
    //printf("%.f\n", 4); // affiche "4" ~
    //printf("%.3f\n", 4.0); // affiche "4.000"
    //printf("%.3f\n", 3.123456); // affiche "3.123"
    //printf("%f\n", 3.12);  // affiche "3.120000" ne pas spécifié de précision pour un float rajoute des 0 jusqu'à avoir 6 chiffres après la virgule
    //printf("%f\n", 3.12345); // affiche "3.123450"
    //printf("%f\n", 3.123456789); // affiche "3.123457" (arrondissement) si aucune précision n'est spécifié et qu'il y a plus de 6 chiffres après la virgule alors le 6eme est arrondis
    //printf("%f\n", 3.123456189); // affiche "3.123456" (arrondissement)
    //printf("%.8f\n", 3.123456789); // affiche "3.12345679" (arrondissement)
    //printf("%10.3f\n", 3.12); // affiche "     3.120"
    //printf("%010.3f\n", 3.12); // affiche "000003.120"
}