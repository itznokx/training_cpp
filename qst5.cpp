#include <iostream>
#include <cmath>

using namespace std;

float operation (float n1, float n2, char op){
	if (op == '+')
		return (n1+n2);
	else if (op == '-')
		return (n1-n2);
	else if (op == '*')
		return (n1*n2);
	else if (op == '/')
		return (n1/n2);
	else
		return (-120938120938); 
}

int main (void){
	for (int i=0;i<10;i++){
		float n1,n2;
		char operator1;
		cout << "Digite o numero 1: " << endl;
		cin >> n1;
		cout << "Digite a operacao (+,-,*,/): " << endl;
		cin >> operator1;
		cout << "Digite o numero 2: " << endl;
		cin >> n2;
		printf("Resultado de %.3f %s %.3f = %.4f \n\n",n1,&operator1,n2,(operation(n1,n2,operator1)));
	}
	return 0;
}