#include <stdio.h>
#include "header.h"
#include <stdlib.h>



int main()
{
    patient tabPatient [5] ={
        {"Girard", "Rene", 54, "AB+",1.74, 92, H},
        {"Cordie", "Annie", 40, "O-",1.62, 64, F},
        {"Martinez", "Silvain", 35, "B+",1.84, 81, H},
        {"Delavilla", "Manuel", 25, "A-",1.76, 85, H},
        {"Bramouche", "Mathilde", 65, "O+",1.73, 66, F},

    };
    
    unRepas listeRepas[4]={
        {140, 123.4, 22.5},
        {120, 121.4, 295},
        {142, 100.4, 229.5},
        {110, 123.4, 129.5},
    };

    
    
    FILE *fichier = fopen("menus_TP2_python.csv", "r");
    if (fichier ==NULL)
    {
        exit(1);
    }
   
    fscanf(fichier, "%*[^\n]\n");
  
    // while (fscanf(fichier, "%99[^,],%99[^,]\n",cat, des));
    // {
    //     printf("Categorie : %s\n",des );
    // }
    
    
    // fscanf(fichier, "%s,%s,%d", cat,des, &nombre);
    // printf("%s",cat);
    // fscanf(fichier, "%s,%s,%d", cat,des, &nombre);
    // printf("%s",cat);
    char c1[150];
    char c2[150];
    float nombre;

    // fscanf(fichier, "%s, %s,%f\n",c1,c2, &nombre);
    // printf("%s, %s, %f\n", c1,c2,nombre);
    // fscanf(fichier, "%s, %s,%f\n",c1,c2, &nombre);
    // printf("%s, %s, %f\n", c1,c2,nombre);
    // while (fscanf(fichier, "%[^,],%[^,],%f",c1,c2,&nombre))
    // {
    //     /* code */ fscanf(fichier, "%[^,],%[^,],%f",c1,c2,&nombre);
    // printf("%s, %s, %f\n", c1,c2,nombre);
    // }
    
    // ecrire_dans_fichier(tabPatient[0], listeRepas, 3);
    recupererInfoFichier(listeRepas[0]);
    
    
    fclose(fichier);
    
   
   
    
    // for (int i = 0; i < 5; i++)
    // {
    //     ratio Quantite =nombre_gramme_necessaire(tabPatient[i]);
    //     printf("G: %f\nL: %f\nP: %f", Quantite.glucide, Quantite.lipide, Quantite.protide);
    //     printf("\n\n");
    // }
    // printf("%d Kcal",nombre_kcal_abs());

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Energie depensee par P%d est:  %f kcal\n",i+1, energie_depensee(tabPatient[i]));
    // }
    // printf("%d",ecrire_dans_fichier(tabPatient[1]));
    
    

    return 0;
}