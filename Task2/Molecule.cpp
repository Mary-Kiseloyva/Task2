#include "Molecule.h"

double Molecule::getAtomicEnergy()
{
	return 0.0; // ??????
}

double Molecule::getMass()
{
	double mass = 0;
	for (auto it = begin(atoms); it != end(atoms); ++it) {
		mass += (*it)->getMass();
	}
	return mass;
}

double Molecule::countAtoms(int atomNumber)
{
	int count = 0;
	for (auto it = begin(atoms); it != end(atoms); ++it) {
		if((*it)->getProtonCount() == atomNumber) 
		{
			count++;
		}
	}
	return count;
}

Molecule::~Molecule()
{
	for (auto it = begin(atoms); it != end(atoms); ++it) {
		delete *it;
	}
}
