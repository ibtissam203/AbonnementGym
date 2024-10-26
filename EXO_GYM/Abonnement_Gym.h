#pragma once
#include <iostream>

using namespace std;

class Abonnement_Gym
{
protected:
	string nom;
	string type;
	int duree;
public:
	Abonnement_Gym(string, string, int);
	virtual double calculer_frais();
	virtual void afficher();
	bool check_offres_special();
};

