#include <iostream>
#include <cmath>

using namespace std;


string eh_ (int x){
	if ((x%2)==0){
		return "par.\n\n";
	}
	else
		return "impar.\n\n";
}

int main (void){
	int n;
	for (int i=0;i<10;i++){
		cout << "Digite um numero: " << endl;
		
		cin >> n;
		cout << "O numero " << n << " eh " << eh_(n);
	}
	return 0;
}