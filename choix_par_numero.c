#include <stdio.h>

int main(){
	int nSelDest = 0;
	
	printf ("Choisissez une destination !\n Manrquins, capitale du Renevac : 1.\n Zvenagar, capitale de la region de Zvenagarr : 2.\n");
	scanf("%d", &nSelDest);
	
	while(nSelDest!=1&&nSelDest!=2){
		printf ("%d n'est pas une option. Vous allez faire ce que je vous dit sinon on va pas y arriver.\n", nSelDest);
		scanf("%d", &nSelDest);
	}
	
	if (nSelDest==1){
		printf ("Vous voici dans la capitale du Renevac, Manrquins, plus grande ville d'outre monde et d'Anghorjii !\n");
	}
	
	if (nSelDest==2){
		printf ("Vous etes arrives a Zvenagar, avec ses chevaliers antiques et son temple Segon.\n");
	}
}