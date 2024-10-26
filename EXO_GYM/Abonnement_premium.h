#pragma once
#include "Abonnement_Gym.h"
class Abonnement_premium :
    public Abonnement_Gym
{
private:
    bool entraineur_perso;
    bool acces_spa;
public:
    Abonnement_premium(string,string,int,bool,bool);
    double calculer_frais() override;
    void afficher() override;

};

