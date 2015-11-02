#include<stdio.h>


void creer_fichier()
{
	int entier;
	char nomfichier[30];
	printf("Donner le nom du fichier a creer\n");
	scanf("%s", nomfichier);
	FILE*fichier=fopen(nomfichier,"w");

	printf("Donner une liste d'entiers et terminer par -1\n");
	scanf("%i",&entier);

		while(entier!=-1)
		{
		fprintf(fichier,"%i",entier);
		scanf("%i",&entier);
		}
	fclose(fichier);
}
					//je modifie pour la conduite
void afficher_fichier()
{
	int entier;
	char nomfichier[30];
	printf("Donner le nom du fichier a afficher\n");
	scanf("%s", nomfichier);

		while(nomfichier==NULL)
		{
		printf("Fichier inexistant");
		printf("Donner le nom du fichier a afficher");
		scanf("%s", nomfichier);
		}
		
	FILE*fichier=fopen(nomfichier,"r");
	fscanf(fichier,"%i",&entier);

		while(feof==0)
		{
		fscanf(fichier,"%i",&entier);
		printf("%i",entier);
		}
	
	fclose(fichier);
}

int main()
{
	creer_fichier();
	afficher_fichier();
}
