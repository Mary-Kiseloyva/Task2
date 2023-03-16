#include <iostream>
#include "Atom.h"
#include "Molecule.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char ch;
	int protons, neutrons, electrons;
	Molecule* molecule = new Molecule();
	Atom* atom;
    while (1)
    {
		cout << "a: Создать атом" << endl;
		cout << "p: Найти число определнных атомов" << endl;
		cout << "e: Посчитать энергию" << endl;
		cout << "m: Посчитать массу" << endl;
		cout << "s: Показать текущую молекулу" << endl;
		cin >> ch;
		switch (ch)
		{
		case 'a':
			cout << "Число протонов:" << endl;
			cin >> protons;
			cout << "Число нейтронов:" << endl;
			cin >> neutrons;
			cout << "Число электронов:" << endl;
			cin >> electrons;
			atom = new Atom(protons, neutrons, electrons);
			molecule->atoms.push_back(atom);
			break;
		case 'p':
			cout << "Порядковый номер:" << endl;
			cin >> protons;
			cout << molecule->countAtoms(protons) << endl;
			break;
		case 'e':
			cout << molecule->getAtomicEnergy() << endl;
			break;
		case 'm':
			cout << molecule->getMass() << endl;
			break;
		case 's':
			for (auto it = begin(molecule->atoms); it != end(molecule->atoms); ++it)
			{
				atom = *it;
				cout << "Протонов: "<< atom->getProtonCount() << " Нейтронов: " << atom->getNeutronCount()
					 << " Электронов: " << atom->getElectronCount() << endl;
			}
			break;
		default:
			break;
		}
    }
	delete molecule;
}