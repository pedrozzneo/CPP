#include <iostream>
#include <math.h>
using namespace std;
int main () {
	
//definitions
	int i, expoente, soma, user;
	i = 1;
	expoente = 7;
	
//loop
	while (i<8) {
		cout << " Enter 0 or 1 to evaluate (or not) the number ";
		cin >> user;
		soma = soma + user * pow(2,expoente);
		i++;
		expoente--;
		cout << "your number in decimals would be: " << soma << "\n";
	}	
	
	

}
