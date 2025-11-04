#include <iostream>
#include "etudiant.h"
#include "personne.h"

int main()
{
	float moy[3]{ 15,12,18 };
	personne a("aa", "bb", 2006);
	etudiant b("aa", "bb", 2060, "aa", moy, "ccc");
	a.affiche();
	b.affiche();
}