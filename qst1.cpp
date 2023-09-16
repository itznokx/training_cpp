#include <iostream>
#include <cmath>

using namespace std;

int main (void){
	float n1,n2;
	cout << "Digite o primeiro numero: " << endl;
	cin >> n1;
	cout << "Digite o segundo numero: " << endl;
	cin >> n2;
	if (n1>n2)
		cout << "O maior numero digitado foi: " << n1 << endl;
	else if (n1<n2)
		cout << "O maior numero digitado foi: " << n2 << endl;
	else
		cout << "Os dois numeros sao iguais" << endl; 
}
