#include <iostream>
#include <string>
using namespace std;

int main () {
	//conta da gasosa do ford ka 2003
	float precogasolina, distanciakm, totalpagar, relacaokml;
	string car;
	cout << "how much is the liter of gasoline? ";
	cin >> precogasolina;
	cout << "how many kms displaced? ";
	cin >> distanciakm;
	cout << "what car are you driving? ";
	cin >> car;
	
	if (car == "hb20") {
		totalpagar =  distanciakm/12.5 * precogasolina;
		cout << totalpagar;
	}
	
	else if (car == "ka") {

		totalpagar =  distanciakm*precogasolina/9.2;
		cout << totalpagar;
}
	else {
		cout << "how much is the relacaokml? ";
		cin >> relacaokml;
		totalpagar = relacaokml * distanciakm/precogasolina;
		cout << totalpagar;
	
	}	
	
}
