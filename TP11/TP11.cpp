#include <iostream>
#include "etudiant.h"
#include "personne.h"
#include "prof.h"

int main()
{
	float moy[3]{ 15,12,18 };
	std::vector<std::string> classes = {"BTSC1","BTSC2"};
	etudiant a("aa", "bb", 2060, "cc", moy, "dd");
	prof b("ee", "ff", 1990, "prog", classes);
	etudiant c("gg", "hh", 2760, "ii", moy, "jj");
	prof d("k", "ll", 1990, "nn", classes);
	a.affiche();
	b.affiche();
	c.affiche();
	d.affiche();
}