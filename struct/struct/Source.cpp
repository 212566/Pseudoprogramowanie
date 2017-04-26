#include <iostream>

using namespace std;


int main()
{
	struct Batonik{
		char marka[40];
		double waga;
		int kcal;
	};

	Batonik batoniki[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Wejscie: batoniki[" << i << "]" << endl;
		cout << "Podaj marke: ";
		cin.getline(batoniki[i].marka, 40);
		cout << "Podaj wage: ";
		cin >> batoniki[i].waga;
		cout << "Podaj kalorie: ";
		cin >> batoniki[i].kcal;
		cin.get();

	}
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "Wyjscie: batoniki[" << i << "]" << endl;

		cout << "Marka: " << batoniki[i].marka << " Waga: " << batoniki[i].waga << " Kalorie: " << batoniki[i].kcal << endl;

	}

	return 0;
}