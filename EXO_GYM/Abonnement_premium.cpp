#include "Abonnement_premium.h"

Abonnement_premium::Abonnement_premium(string nom, string type, int duree, bool entraineur_pers, bool spa)
    :Abonnement_Gym(nom,type,duree),entraineur_perso(entraineur_pers), acces_spa(spa)
{
}

double Abonnement_premium::calculer_frais()
{
    double frais = Abonnement_Gym::calculer_frais();
    double frais_premium = 0.0;
    if (this->entraineur_perso)
    {
        frais_premium = 150 * duree;
        
    }
    if (this->acces_spa)
    {
        frais_premium += 100 * duree;

    }
    return frais + frais_premium;
}

void Abonnement_premium::afficher()
{
    cout << "nom : " << this->nom << endl;
    cout << "type : " << this->type << endl;
    cout << "duree : " << this->duree << endl;
    cout << "frais d'abonnement : " << calculer_frais() << "DH" << endl;
}
