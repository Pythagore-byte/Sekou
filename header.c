#include <stdio.h>


typedef enum Booleen
{
    false,
    true
}bool;

typedef struct Moteur
{
    float temperature;
    bool ProbElec;
    bool ProbMec;
}moteur;

typedef struct Attitute
{
    float angle_x, angle_y, angle_z;
}attitude;


typedef struct Altitude
{
    float altitude;
}altitude;


typedef struct Carburant
{
    
}carburant;

typedef enum Couleurs
{
    BLEU,
    ROUGE,
    VERT,
    JAUNE
} couleur;

couleur tabCouleurs [4]={
    BLEU,
    ROUGE, 
    VERT,
    JAUNE
};