#include<stdio.h>

int main()
{
	int nbl, nbm, nbc;
	char nomfichier[30];
	printf("Donner le nom du fichier");
	scanf("%s", nomfichier);
	FILE*fichier=fopen(nomfichier,"r");
	
		while(!feof)
		{
		for(nbl=0;'\n';nbl++)
			printf("Il y a %i lignes",nbl);
		for(nbm=0;'_';nbm++)
			printf("Il y a %i mots",nbm);
		for(nbc=0;"%c";nbc++)
			printf("Il y a %i caractères",nbc);
		}

}
