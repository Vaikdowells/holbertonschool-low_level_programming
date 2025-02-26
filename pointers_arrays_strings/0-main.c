#include <stdio.h>
#include "main.h"  /* Inclusion du fichier d'en-tête pour la fonction */

int main() {
	int num = 42;  /* Déclaration d'une variable */
	printf("Avant reset: %d\n", num);  /* Affichage de la valeur initiale de num */
	reset_to_98(&num);  /* Appel de la fonction, en passant l'adresse de num */
	printf("Après reset: %d\n", num);  /* Affichage de la nouvelle valeur de num */
		return 0;
}
