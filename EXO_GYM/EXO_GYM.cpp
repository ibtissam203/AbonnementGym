// EXO_GYM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Abonnement_Gym.h"
#include "Abonnement_premium.h"
int main()
{
	Abonnement_Gym A1("ibtissam abdouni", "non", 2);
	A1.afficher();
	cout << "***************************" << endl;
	Abonnement_premium A2("ibtissam ", "non", 2 , 1,0);
	A2.afficher();
	cout << "***************************" << endl;
	Abonnement_premium A3("hajar farid", "non", 2, 1, 1);
	A3.afficher();

	cout << "***************************" << endl;
	Abonnement_premium* A4 =new Abonnement_premium("farid", "Annuel", 12, 1, 1);
	A4->afficher();

	delete A4;
}
