#include <iostream>
#include <cmath>

using namespace std;

string convertToFar (float c){
	float far = ((9*c)+160)/5;
	if (far >= 212)
		return "A temperatura esta muito alta.\n";
	else if (far <= 32)
		return "A temperatura esta muito baixa.\n";
	else
		return ("A temperatura esta normal.\n");		
}

int main (void){
	for (int i =0;i<25;i++){
		float temp;
		cout << "Digite a temperatura: " << endl;
		cin >> temp;
		cout << convertToFar(temp);
	}
	return 0;
}