#include <stdio.h>
#include <string.h>

int main(){
	char cSelDest [50];
	char cDest1 [50] = "Manrquins\0";
	char cDest2 [50] = "Zvenagar\0";
	
	printf ("Choisissez une destination !\n Manrquins, capitale du Renevac.\n Zvenagar, capitale de la region de Zvenagarr.\n");
	scanf("%s", &cSelDest);
		
	while(strcmp (cSelDest, cDest1) != 0 && strcmp(cSelDest, cDest2) !=0 ){
		printf ("%s n'est pas une option. Vous allez faire ce que je vous dis sinon on va pas y arriver.\n", cSelDest);
		scanf("%s", &cSelDest);
	}
			
	if (strcmp(cSelDest, cDest1) == 0){
		printf ("Vous voici dans la capitale du Renevac, Manrquins, plus grande ville d'outre monde et d'Anghorjii !\n");
	}
		
	if (strcmp(cSelDest, cDest2) == 0){
		printf ("Vous etes arrives a Zvenagar, avec ses chevaliers antiques et son temple Segon.\n");
	}
			
	return 0;
}