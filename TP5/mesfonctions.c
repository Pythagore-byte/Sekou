
#include <stdlib.h>
#include <stdio.h>
#define ligne 403
#define colonne 511


int** loadImage(char nom_fic[100])
{

    FILE *fichier = fopen(nom_fic, "r");
    if (fichier ==NULL)
    {
        exit(1);
        printf("Une erreur s'est produite lors de l'ouverture du fichier.\n");
    }
    
    fscanf(fichier, "%*[^\n]\n");
    fscanf(fichier, "%*[^\n]\n");
    fscanf(fichier, "%*[^\n]\n");
    int nombre;
    int** image = (int**)malloc(ligne * sizeof(int *));
    for (int i = 0; i < ligne; i++)
    {
        image[i]= (int*)malloc(colonne *sizeof(int));
        for (int j = 0; j < colonne; j++)
        {
            fscanf(fichier,"%d",&nombre);
            image[i][j]= nombre;
        }
    }

    
    fclose(fichier);
    return image;
  
}
void liberer_tableau(int**image, int lignes)
{
    for (int i = 0; i < lignes; i++)
    {
        free(image[i]);
    }
    free(image);
    
}
// void recordImage()
// {
    
// }
void afficherImage(int** tabImage, int lignes, int colonnes)
{
    for (int i = 0; i < lignes; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            printf("%d ", tabImage[i][j]);
        }
        printf("\n");
        
    }

}