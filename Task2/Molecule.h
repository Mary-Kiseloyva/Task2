#pragma once
#include "Atom.h"
#include <vector>

using namespace std;

class Molecule
{
public:
	vector<Atom*> atoms;
	double getAtomicEnergy();
	double getMass();
	double countAtoms(int atomNumber);
	~Molecule();
};

