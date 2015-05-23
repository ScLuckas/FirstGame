#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int niveau; //Niveau de difficulté
    printf("Choisir un niveau de difficulté (1, 2 ou 3):");
    scanf("%d", &niveau);
    printf("Niveau %d\n", niveau);
	int nombre; //Nombre à trouver
    int MAX, MIN; // Extrêmes a trouver en fonction du niveau
	int proposition; //Entrée du joueur
	int coups; //Nombre de coups
	srand(time(NULL));

    if(niveau == 1)
    {
        MAX = 100;
        MIN = 1;
    }
    if(niveau == 2)
    {
        MAX = 500;
        MIN = 1;
    }
    if(niveau == 3)
    {
        MAX=1000; 
        MIN = 1;
    }
    nombre = (rand() % (MAX - MIN + 1)) + MIN;
	coups = 0;
    printf("Tu dois trouver le nombre mystère entre 1 et %d\n", MAX);
	printf("Bonne chance l'amis!\n");
	while(proposition != nombre)
	{
		printf("Quel est votre proposition ?");
		scanf("%d", &proposition);
		if(proposition > nombre)
		{
			printf("C'est plus petit\n");
		}
		else
		{
			printf("C'est plus grand\n");
		}
		coups = coups + 1;
	}
	printf("Félicitation, vous avez trouvé le nombre!\n");
	printf("Votre score est de %d\n", coups);
	return 0;
}
