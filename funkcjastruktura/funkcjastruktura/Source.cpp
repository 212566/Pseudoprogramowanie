#include < iostream >

using namespace std;

struct applicant {
	char name[30];
	int credit_rating;
};

void show(applicant a);
void showpointed(applicant &a);
void showpointed(applicant *a);

int main()
{
	applicant a1  { "Zbyszek", 3 };
	applicant *pa1 = &a1;

	show(a1);
	showpointed(a1);
	showpointed(pa1);
	return 0;
}

void show(applicant a)
{
	cout << "Nazwa : " << a.name << endl;
	cout << "CR: " << a.credit_rating << endl;

}

void showpointed(applicant &a)
{
	cout << "Nazwa : " << a.name << endl;
	cout << "CR: " << a.credit_rating << endl;
}

void showpointed(applicant *a)
{
	cout << "Nazwa : " << a->name << endl;
	cout << "CR: " << a->credit_rating << endl;
}