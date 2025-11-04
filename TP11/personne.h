#pragma once
#include <string>
#include <vector>

class personne {
protected:
	std::string nom;
	std::string prenom;
	int annee;
public:
	personne(std::string lenom, std::string leprenom, int annee);
	~personne();
	void affiche();
};

