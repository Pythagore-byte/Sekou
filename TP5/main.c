#include <stdio.h>
#include "header.h"
#include <stdlib.h>
#define ligne 403
#define colonne 511


int main()
{

//    int image[ligne][colonne];

//    FILE *fichier = fopen("lena.pgm", "r");
//    if (fichier ==NULL)
//    {
//         exit(1);
//    }
   
//     fscanf(fichier, "%*[^\n]\n");
//     fscanf(fichier, "%*[^\n]\n");
//     fscanf(fichier, "%*[^\n]\n");
//     int nombre;

//     for (int i = 0; i < ligne; i++)
//     {

//         for (int j = 0; j < colonne; j++)
//         {
//             fscanf(fichier,"%d",&nombre);
//             image[i][j]= nombre;
//         }
        
      
//     }

//     for (int i = 0; i < ligne; i++)
//     {
//         for (int j = 0; j < colonne; j++)
//         {
//             printf("%d ", image[i][j]);
//         }
//         printf("\n");
        
//     }
    
    int** monImage = loadImage("lena.pgm");
    afficherImage(monImage, ligne, colonne);
    liberer_tableau(monImage, ligne);

    
    
    
    
    

   


    return 0;
}