#include "Atom.h"

Atom::Atom(int protonCount, int neutronCount, int electronCount)
{
	_protonCount = protonCount;
	_neutronCount = neutronCount;
	_electronCount = electronCount;
}

double Atom::getMass()
{
    return 9.1 * 1e-31 * _electronCount + (_protonCount + _neutronCount) * 1.67 * 1e-27;
}

int Atom::getProtonCount()
{
	return _protonCount;
}

int Atom::getNeutronCount()
{
	return _neutronCount;
}

int Atom::getElectronCount()
{
	return _electronCount;
}
