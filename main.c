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
    
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%s %s: %d\t\n",tabPatient[i].prenom,tabPatient[i].nom ,  obesite(tabPatient[i]));
    // }
    
    // FILE *fichier = fopen("test.txt", "r");
    // if (fichier ==NULL)
    // {
    //     exit(1);
    // }
    
    // while (fgetc(fichier)!=EOF)
    // {
    //     printf("%c",fgetc(fichier));

    // }
    
    
   
    
    // fclose(fichier);
   
    
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