#include <stdlib.h>
#include<stdio.h>
#define carre(x) (x)*(x)

int main() {
	int Nb = 5;

	printf("le carre de %d est %d", Nb + 1, carre(Nb + 1));

	//On obtient 11 en affichant carre(Nb+1)
	//L'erreur vient des parenthèses, sans parenthèses, le macro calcule deja la multiplication 1*Nb puis il ajoute 
	//ensuite il additione tous les termes donc 5+5+1...

	return (EXIT_SUCCESS);
}
