#include "prof.h"
#include <iostream>

prof::prof(std::string lenom, std::string leprenom, int année, std::string matiere, std::vector<std::string> classes)
	:personne(lenom,leprenom,année)
{
	this->matiere = matiere;
	this->Classes = classes;
}

void prof::affiche()
{
	personne::affiche();
	std::cout << matiere << std::endl;
	std::copy(Classes.begin(), Classes.end(), std::ostream_iterator<std::string>(std::cout, " "));
	std::cout << std::endl;
}