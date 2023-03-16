#pragma once

class Atom
{
private:
	int _protonCount;
	int _neutronCount;
	int _electronCount;
public:
	double getMass();
	int getProtonCount();
	int getNeutronCount();
	int getElectronCount();
	Atom(int protonNumber, int neutronNumber, int electronCount);
};
