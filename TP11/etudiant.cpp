#include "etudiant.h"
#include <cstring>
#include <iostream>

etudiant::etudiant(std::string lenom, std::string leprenom, int annee, const char* classe, const float* Moyenne, std::string commentaires)
    : personne(lenom, leprenom, annee), commentaires(commentaires)
{
    strncpy_s(this->classe, classe, 4);
    this->classe[4] = '\0';
    for (int i = 0; i < 3; ++i) {
        this->moyenne[i] = Moyenne[i];
    }
}

etudiant::~etudiant() {}

void etudiant::affiche()
{
	personne::affiche();
	std::cout << "Classe : " << this->classe << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "moy " << i + 1 << " : " << this->moyenne[i];
		std::cout << " ";
	}
	std::cout << "\nCommentaire : " << this->commentaires<<std::endl;
}