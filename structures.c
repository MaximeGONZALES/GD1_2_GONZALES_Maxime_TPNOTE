#include <stdio.h>
#include <string.h>

struct Lieu  {
	char nom [50] ;
	char desc [600] ;
	int diff;
	int id;
};

typedef struct Lieu lieu;



int main(){
	
	lieu Lieu1 = {"Manrquins","Capitale du Renevac, siege de l'Empire, de la monnaie, et d'un complexe d'inferiorite d'ampleur continentale.", 2, 1};
	lieu Lieu2 = {"Zvenagar", "Capitale de la dongue du Zvenagarr, haut lieu de l industrie Manrquinoite et ancienne ville commercante.", 5, 2};
	lieu Lieu3 = {"Estaloth", "Glacier dans les monts du Diable. -5C l'ete, -35C l'hiver. Non, sans blague, qu'est-ce que vous etes venus faire la ?", 19, 3};

	char tablelieu [4] = {0, Lieu1.id, Lieu2.id, Lieu3.id};
	int nPosition = 0;
	int nLieuSelec = 0;
	int nTimesthere = 0;
	
	char deplacement () {
	
		char cSelDest [50];
		printf ("Choisissez une destination !\n Manrquins, Zvenagar, ou Estaloth.\n");
		scanf("%s", &cSelDest);
		
		
		while(strcmp (cSelDest, Lieu1.nom) != 0 && strcmp(cSelDest, Lieu2.nom) !=0 && strcmp(cSelDest, Lieu3.nom) !=0) {
			printf ("%s n'est pas une option. Vous avez du faire une faute d'orthographe.\n", cSelDest);
			scanf("%s", &cSelDest);
		}
		
		if (strcmp(cSelDest, Lieu1.nom) == 0){
			nLieuSelec=1;
			while(nLieuSelec == tablelieu[nPosition]&&nTimesthere>0){
				printf ("Vous ne pouvez pas aller la ou vous vous trouvez deja.\n");
				scanf("%s", &cSelDest);
				if (strcmp(cSelDest, Lieu1.nom) == 0){
					nLieuSelec=1;
				}
				if (strcmp(cSelDest, Lieu2.nom) == 0){
					nLieuSelec=2;
					nTimesthere=0;
				}
				if (strcmp(cSelDest, Lieu3.nom) == 0){
					nLieuSelec=3;
					nTimesthere=0;
				}
			}
			
			if(nTimesthere==0){
				printf ("Vous partez vers Manrquins !\n");
				printf ("%s \n", Lieu1.desc);
				nPosition = 1 ;
				nTimesthere = nTimesthere+1;
				deplacement ();
				
			}
			
			
			
		}
			
		if (strcmp(cSelDest, Lieu2.nom) == 0){
			nLieuSelec=2;
			while(nLieuSelec == tablelieu[nPosition]&&nTimesthere>0){
				printf ("Vous ne pouvez pas aller la ou vous vous trouvez deja.\n");
				scanf("%s", &cSelDest);
				if (strcmp(cSelDest, Lieu1.nom) == 0){
					nLieuSelec=1;
					nTimesthere=0;
				}
				if (strcmp(cSelDest, Lieu2.nom) == 0){
					nLieuSelec=2;
				}
				if (strcmp(cSelDest, Lieu3.nom) == 0){
					nLieuSelec=3;
					nTimesthere=0;
				}
			}
			
			if(nTimesthere==0){
				printf ("Vous partez vers Zvenagar !\n");
				printf ("%s \n", Lieu2.desc);
				nPosition = 2 ;
				nTimesthere = nTimesthere+1;
				deplacement ();
			}
			
			
		}
		
		if (strcmp(cSelDest, Lieu3.nom) == 0){
			nLieuSelec=3;
			while(nLieuSelec == tablelieu[nPosition]&&nTimesthere>0){
				printf ("Vous ne pouvez pas aller la ou vous vous trouvez deja.\n");
				scanf("%s", &cSelDest);
				if (strcmp(cSelDest, Lieu1.nom) == 0){
					nLieuSelec=1;
					nTimesthere=0;
				}
				if (strcmp(cSelDest, Lieu2.nom) == 0){
					nLieuSelec=2;
					nTimesthere=0;
				}
				if (strcmp(cSelDest, Lieu3.nom) == 0){
					nLieuSelec=3;
				}
			}
			
			if(nTimesthere==0){
				printf ("Vous partez vers Estaloth !\n");
				printf ("%s \n", Lieu3.desc);
				nPosition = 3 ;
				nTimesthere = nTimesthere+1;
				deplacement ();
			}
			
			
		}
		
		
	};
	
	deplacement();
	
	
	return 0;
}