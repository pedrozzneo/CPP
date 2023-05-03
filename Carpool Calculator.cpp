#include <iostream>
using namespace std;

int main () { 
	float GasPrice, Distance, CarConsumption, TollNumber, TollTotal, TollPrice, People, Money, i;
	i = 1;
	TollTotal = 0;
	cout << "how much is gas today? ";
	cin >> GasPrice;
	cout << endl << "how far is the destiny you wanna go? ";
	cin >> Distance;
	cout << "\nhow much is your car consumption? "; 
	cin >> CarConsumption;
	cout << "\nhow many Tolls are there on the way? ";
	cin >> TollNumber;
	
	while (i<=TollNumber) {
		cout << "\nhow much is the Toll " << i << " ? ";
		cin >> TollPrice;
		TollTotal = TollTotal + TollPrice;
		i++;
	}
	
	cout << "\nhow many people are going? ";
	cin >> People;
	
	
	Money = ((Distance/CarConsumption) * GasPrice + TollTotal)/People;
	cout << "\nEach person has to pay " << Money;
	
}
