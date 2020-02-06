#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Lieu1;
struct Lieu2;

int choix;

int main(){
	
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
}


