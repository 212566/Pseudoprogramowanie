#include <cstdio>
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;

// 
class Zwierze {
public:

	string imie;
	
	virtual void glos(){}


};


class koza : public Zwierze
{
public:

	void glos()
	{
		cout << " mee ";

	}
};


class owca : public Zwierze{
public:

	void glos()
	{
		cout << " bee ";

	}
};




int main()
{
	srand(time(NULL));

	Zwierze *z=NULL;

	switch (rand() % 2)// " %3 3 opcje %4 4 opcje itd.
	{


		case 0:
		{
			z = new owca();
			break;
		}
		case 1:
		{
			z = new koza();
			break;
		}
		default:

			z = NULL;
			break;

	}

	

	cout << "daj glos";
	z->glos();



	
}