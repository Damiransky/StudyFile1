// Connect the library for Cyrillic, and to use console
#include <iostream>
#include <cstdlib>
// Use namespace for new variables, and safe them
using namespace std;
// Create new function for search number of newtones
int main() {
	// Use Cyrillic
	system("chcp 1251>nul");
	// Create constant
	const double NEWTON_IN_TON = 9806.65;
	// Create variables
	double tons, newtons;
	// Output on cmd our query 
	cout << "Укажите количество ньютонов:";
	// Waiting for response 
	cin >> newtons;
	// Сalculate
	tons = (double) newtons / NEWTON_IN_TON;
	// Give value
	cout << "Перевод в тонны составил: " << tons << endl;
	system("pause > nul");
	return tons;
}