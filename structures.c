#include <stdio.h>
#include <string.h>

struct Lieu  {
	char nom [50] ;
	char desc [600] ;
	int diff;
	int id [2];
};

typedef struct Lieu lieu;



int main(){
	
	lieu Lieu1 = {"Manrquins","Capitale du Renevac, siege de l'Empire, de la monnaie, et d'un complexe d'inferiorite d'ampleur continentale.", 2, {2,3}};
	lieu Lieu2 = {"Zvenagar", "Capitale de la dongue du Zvenagarr, haut lieu de l industrie Manrquinoite et ancienne ville commercante.", 5, {1,3}};
	lieu Lieu3 = {"Estaloth", "Glacier dans les monts du Diable. -5C l'ete, -35C l'hiver. Non, sans blague, qu'est-ce que vous etes venus faire la ?", 19, {1,2}};

	char deplacement (){
	
	char cSelDest [50];
	printf ("Choisissez une destination !\n Manrquins, Zvenagar, ou Estaloth.\n");
	scanf("%s", &cSelDest);
	
	while(strcmp (cSelDest, Lieu1.nom) != 0 && strcmp(cSelDest, Lieu2.nom) !=0 && strcmp(cSelDest, Lieu3.nom) !=0) {
		printf ("%s n'est pas une option. Vous allez faire ce que je vous dis sinon on va pas y arriver.\n", cSelDest);
		scanf("%s", &cSelDest);
	}
			
	if (strcmp(cSelDest, Lieu1.nom) == 0){
		printf ("Vous partez vers Manrquins !\n");
		printf ("%s \n", Lieu1.desc);
	}
		
	if (strcmp(cSelDest, Lieu2.nom) == 0){
		printf ("Vous partez vers Zvenagar !\n");
		printf ("%s \n", Lieu2.desc);
	}
	
	if (strcmp(cSelDest, Lieu3.nom) == 0){
		printf ("Vous partez vers Estaloth !\n");
		printf ("%s \n", Lieu3.desc);
	}
	};
	
	deplacement();
	
	
	return 0;
}