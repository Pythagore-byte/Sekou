#include "header.h"
#include <stdlib.h>
#include <stdio.h>
#define R_A_Homme 2800
#define R_A_Femme 2200
#define MASSE_GLUCIDE 4
#define MASSE_PROTIDE 4
#define MASSE_LIPIDE 9
#define G 9.8


int obesite(patient P) // cette fonction renvoie 1 si une personne est obese , 0 sinon
{
    float IMC;
    IMC = (P.masse)/(P.taille*P.taille);

    if ((P.sexe ==1) && IMC >27)
    {
        return 1;
    }
    else if ((P.sexe==0) && IMC>24)
    {
        return 1;
    }
    return 0;
      

}



ratio nombre_gramme_necessaire(patient P) // question 6
{

    ratio R;

    if (P.sexe==H)
    {
        R.glucide =(0.55*R_A_Homme)/4.0;
        R.lipide = (0.30*R_A_Homme)/9.0;
        R.protide = (0.15 *R_A_Homme)/4.0;
    }
    else
    {
        R.glucide =(0.55*R_A_Femme)/4.0;
        R.lipide = (0.30*R_A_Femme)/9.0;
        R.protide = (0.15 *R_A_Femme)/4.0;


    }
    return R; 

}

int nombre_kcal_abs(unRepas R) //cette fonction renvoie le nombre de kcal absorbe par un repas compose de steak, boeurre et du riz (question 7)

{
    
    int v = R.qsteak*MASSE_PROTIDE + R.qboeurre*MASSE_LIPIDE+R.qriz*MASSE_GLUCIDE;
    return v;
}

float energie_pompes(patient P, int nombre_pompes)
{
    float E_pompes = (0.5*P.masse)*G*0.2*P.taille;

    return (E_pompes*nombre_pompes)/4182;

}

float energie_flexions(patient P, int nombre_flexions)
{
    float E_flexions = (0.75*P.masse)*G*0.25*P.taille;
    return (E_flexions*nombre_flexions)/4182;

}






float energie_depensee(patient P, int nPompes, int nFlexions) // question 8
{
    float E_pompes = energie_pompes(P,nPompes);
    float E_flexions = energie_flexions(P, nFlexions);

    return E_pompes+E_flexions;

    

}

//question 9


void ecrire_dans_fichier(patient P, unRepas R[4], int nombreflexion)
{
    
    
    FILE *fichier = fopen("sekou.txt", "w+");
    if (fichier ==NULL)
    {
        exit(1);
    }

    for (int i = 0; i < 4; i++)
    {
        fprintf(fichier, "%f\t%f\t%f\t%d\t%f\n",R[i].qriz, R[i].qboeurre, R[i].qsteak, nombreflexion, P.masse);
        
    }
    


    fclose(fichier);


    
}

// exo 10


void recupererInfoFichier(unRepas R)
{
    FILE *fichier = fopen("sekou.txt", "r");
    if (fichier ==NULL)
    {
        exit(1);
    }
    
    float g, l, p, m;
    int nf;
    
    fscanf(fichier, "%f\t%f\t%f\t%d\t%f\n",g,l,&g, &p, &nf, &m);
    printf("%f%f%f%d%f",g,l,p,nf, m);
    fclose(fichier);
}
