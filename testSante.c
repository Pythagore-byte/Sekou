#include "header.h"
#define R_A_Homme 2800
#define R_A_Femme 2200
#define MASSE_GLUCIDE 9
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



ratio nombre_gramme_necessaire(patient P)
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

int nombre_kcal_abs() //cette fonction renvoie le nombre de kcal absorbe par un repars compose de steak, boeurre et du riz

{

    int var = STEAK*MASSE_PROTIDE+BOEURRE*MASSE_LIPIDE+RIZ*MASSE_GLUCIDE;
    return var;

}

float energie_depensee(patient P)
{

    float E_pompes = (0.5*P.masse)*G*0.2*P.taille;
    float E_flexions = (0.75*P.masse)*G*0.25*P.taille;

    return (E_pompes+E_flexions)/4182;

    

}

//question 9


int ecrire_dans_fichier(patient P)
{

    int qGlucide = RIZ*4;
    int qLipide = BOEURRE *9;
    int qProtide = STEAK *4;
    float E_flexions = (0.75*P.masse)*G*0.25*P.taille;
    int energie_abs_repas = nombre_kcal_abs(P);
    int nombre_pompes = (200*energie_abs_repas)/(E_flexions/4182);
    return nombre_pompes;
}