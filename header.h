
typedef enum Sexe
{
    H=1,
    F=0

} sexe;
typedef struct InfoPatient
{
    char nom[50];
    char prenom[50];
    int age;
    char groupeSanguin[6];
    float taille;
    float masse;
    sexe sexe;
    
}patient;

typedef struct Ratio_Alim //Une structure composee de : nombre de glucide, lipide et protide
{
    float glucide;
    float lipide;
    float protide;
} ratio;


typedef enum repas // une enumeration de type repas composee de steak de 200 g , boeurre de 35 g et du riz de 150 g
{
    STEAK = 200,
    BOEURRE = 20+15,
    RIZ = 150

}repas;



int obesite(patient P);
ratio nombre_gramme_necessaire(patient P);
int nombre_kcal_abs();
float energie_depensee(patient P);
int ecrire_dans_fichier(patient P);