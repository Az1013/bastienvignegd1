#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int dor = 0;
int choix = 0;
int pv = 100;

struct Chapitre1{
	char description[60];
	int tabchapitres[3];
};

struct Chapitre2{
	char description[60];
	int tabchapitres[3];
};

struct Chapitre3{
	char description[60];
	int tabchapitres[3];
};

struct Lieu1;
struct Lieu2;


int main(){
	
		printf (" Chapitre1 : Vous avez 0 dor et 100 pv \n" ,dor, pv);
		printf("Bonsoir, faites votre choix, ou souhaitez vous aller ?\n");
		printf("1 pour vous rendre dans le Lieu1, 2 pour vous rendre au Lieu2 ?\n");
		scanf("%d" ,&choix);
	
	if (choix==1)
	{
		printf("Vous etes maintenant en ce Lieu1");
	}
	if (choix==2)
	{
		printf("Vous etes dorenavant en le Lieu2");
	}
	
	printf("\n Que souhaitez vous faire ?"
	"\n\n 1.Je vais a gauche"
	"\n\n 2.Je vais a droite");
	scanf ("%d" ,&choix);
		
	if (choix == 1)
	{
		printf ("\n Vous vous baladez dans le Lieu1 vous trouvez un piece par terre");
		dor +=10;
		printf ("\n Vous remportez 10 dor");
		printf ("or 10");
	}
	
	else if (choix == 2)
	{
		printf ("\n Vous tombez sur un monstre qui vous attaque");
		pv -=10;
		printf("\n Vous perdez 10 pv");
		printf("\n pv 90");
	}
	
	printf ("\n Vous venez de finir le Chapitre1");
	printf ("\n choix du prochain chapitre"
	"\n\n 1.Chapitre2"
	"\n\n 2.Chapitre3");
	scanf ("%d" ,&choix);
	
	if (choix == 1)
	{
		printf("\n Debut du Chapitre2");
	}
	
	else if (choix == 2)
	{
		printf("\n Debut du Chapitre3");
	}
};
		


