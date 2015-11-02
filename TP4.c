#include<stdio.h>
#include<string.h>

#define N 6
#define M 5

/*void init_mat(int mat[N][M])
{
	int i,j;
	
	for(i = 0 ; i < N ; i++)
	{
		for(j = 0;j < M; j++)
		{
			mat[i][j]=0;
		}
	}
}*/ 										 /* Fonction pour initialiser la matrice avec que des 0 pour tester la fonction affichage matrice */

void affiche_mat(int mat[N][M]) 						 /* Fonction qui affiche la matrice ligne par ligne */
{
	int i,j; 								 /* Initialisation des variables */
	
	for(i=0;i<N;i++) 							 /* Instructions pour ecrire une a une les valeurs de la matrice en sŽparant les lignes */
	{
		for(j=0;j<M;j++)
		{
			printf("%i ",mat[i][j]); 
		}
		printf("\n");
	}
}

void norme_ligne(int mat[N][M])                                                  /* Fonction qui calcule la norme ligne d'une matrice */
{
	int i,j;                                                                 /* Initialisation des variables */
	int somme=0,max=0; 
	
	for(i =0 ; i<N ; i++)                                                    /* Calcul de la somme de chaque ligne et comparaison avec une valeur maximale iitialisŽ */
	{
		somme =0;
		for(j =0 ; j<M; j++)
		{
			somme = somme + mat[i][j];
			if(somme > max)
			{
				max = somme;
			}	
		}	
	}
	printf("La norme ligne est %i.\n",max); 				 /* Affichage de la norme ligne */
}	

void norme_colonne(int mat[N][M]) 						 /* Fonction qui calcule la norme colonne d'une matrice */
{
	int i,j; 								 /* Initialisation des variables */
	int somme=0,max=0;
	
	for(j =0 ; j<M ; j++) 							 /* Calcul de la somme de chaque colonne et comparaison avec une valeur maximale initialisŽ */
	{
		somme =0;
		for(i =0 ; i <N ; i++)
		{
			somme = somme + mat[i][j];
			if(somme > max)
			{
				max = somme;
			}
		}
	}
	printf("La norme colonne est %i.\n",max); 				 /*Affichage de la norme colonne */
}

int main() 									 /* Fonction principale */
{
	int mat[N][M]; 								 /* Initialisation des variables */
	int i,j;
	char nom_fichier[20];
	FILE* fic;
	
	printf("Donnez le nom du fichier :\n"); 				 /* Ouverture du fichier */
	scanf("%s",nom_fichier);
	fic = fopen(nom_fichier,"r");
	 
	
	/* for(i =0 ; i<N ; i++) 
	{
		for(j =0 ; j<M ; j++)
		{
			printf("Donnez le chiffre a rentrer dans la matrice :\n");
			scanf("%i",&mat[i][j]);
		}
	}*/ 									 /* Partie pour que l'utilisateur entre lui meme les valeurs de la matrice. */
	
	/*printf("Le fichier est ouvert.\n");*/ 				 /* printf pour tester l'ouverture du fichier */
	while (!feof(fic))
	{
		/*printf("Je suis dans la boucle.\n");*/ 			 /* printf pour tester l'arrivee dans la boucle while */
		for (i =0 ; i<N ; i++)
		{
			/*printf("Je suis dans la deuxieme boucle.\n"); */ 	 /* printf pour tester l'arrivee dans la premiere boucle for */
			for (j =0 ; j<M ; j++)
			{
				fscanf(fic,"%i",&mat[i][j]);
			}
		}
	}
	
	affiche_mat(mat);
	
	norme_ligne(mat);
	norme_colonne(mat);
	
	return 0;
}	
