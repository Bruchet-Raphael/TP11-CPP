#pragma once
#include "personne.h"

class etudiant : public personne
{
    char classe[5];
    float moyenne[3];
    std::string commentaires;
public:
    etudiant(std::string lenom,
        std::string leprenom,
        int annee,
        const char* classe, // Correction ici : const char* au lieu de char*
        const float* Moyenne, // Correction ici : const float* au lieu de float*
        std::string commentaires);
    ~etudiant();
    void affiche();
};
    
