#include "Abonnement_Gym.h"

Abonnement_Gym::Abonnement_Gym(string n, string t, int d): nom(n), type(t),duree(d)
{
}

double Abonnement_Gym::calculer_frais()
{
    double frais_mois = 200;
    double d= frais_mois * duree;
    if (type == "Annuel")
    {
        return frais_mois *12 * 0.9;
       
    }
    return d;
}

void Abonnement_Gym::afficher()
{
    cout << "nom : " << this->nom << endl;
    cout << "type : " << this->type << endl;
    cout << "duree : " << this->duree << endl;
    cout << "frais d'abonnement : " << calculer_frais() << "DH" << endl;
    
}

bool Abonnement_Gym::check_offres_special()
{
    if (type == "Annuel")
    {
        cout << "10 % de reduction sur l'adhésion annuelle."<<endl;
        return true;
    }
    return false;
}
