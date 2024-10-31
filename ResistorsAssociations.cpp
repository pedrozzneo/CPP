#include<iostream>
#include<locale.h>
#include<math.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	cout << "Associa��o de resistores em s�rie (s) ou paralelo (p)? ";
	char answer = 't';
	
	//os outros n estao definidos (diferente de 0 e 1 / 1 e 0) logo (0 e 0)
	while(answer != 's' && answer != 'p'){
		cin >> answer;
	}
	
	cout << "Quantos? ";
	int quantidade;
	cin >> quantidade;
	
	float resistor[quantidade];
	float Resistor_equivalente = 0;
	
	if(answer == 's'){
		for(int i = 0; i < quantidade; i++){
			cout << "valor do " << i + 1 << "�: ";
			cin >> resistor[i];
			Resistor_equivalente += resistor[i];
		}	
		cout << "Resistor equivalente = " << Resistor_equivalente;	
	}
		
	if(answer == 'p'){
		for(int i = 0; i < quantidade; i++){
			cout << "valor do " << i + 1 << "�: ";
			cin >> resistor[i];
			Resistor_equivalente += 1/resistor[i];
		}	
		
		cout << "Resistor equivalente = " << 1/Resistor_equivalente;		
	}
	
	return 0;
}
