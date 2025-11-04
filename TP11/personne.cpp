#include "personne.h"
#include <iostream>


personne::personne(std::string lenom, std::string leprenom, int annee)
{
	this->nom = lenom;
	this->prenom = leprenom;
	this->annee = annee;
}

personne::~personne()
{

}

void personne::affiche()
{
	std::cout << "Le nom : " << this->nom << "\nLe prenom : " << this->prenom << "\nl'annee : " << this->annee<<std::endl;
}
