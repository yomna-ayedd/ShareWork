#include<stdio.h>
/* Fonction carré */
unsigned long carre(
short nb) /* Nombre à opérer */
{
/* Renvoi valeur carré */
return((long)nb * nb);
}

/* Fonction cube */
long cube(
short nb) /* Nombre à opérer */
{
/* Renvoi valeur cube */
return((long)nb * nb * nb);
}

/* Fonction principale */

main()
{
/* Déclaration des variables */

/* Programmation */
printf("Carré de 2 = %lu\n", carre(2));
printf(“Cube de 3 = %ld\n", cube(3));
}
