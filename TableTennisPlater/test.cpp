#include"tabteen0.h"

int main()
{
	using namespace std;
	TableTennisPlayer play1("chuck", "Blizzard", true);
	TableTennisPlayer play2("Tara", "Boomdea", false);

	play1.Name();

	if (play1.HasTable())
		cout << "has a table" << endl;

	else
		cout << "not a table" << endl;

	play2.Name();

	if (play2.HasTable())
		cout << "has a table" << endl;

	else
		cout << "not a table" << endl;


	return 0;
}