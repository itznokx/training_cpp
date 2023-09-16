#include <iostream>
#include <cmath>

using namespace std;

class Aluno{
public:
	string nome,situation;
	float n1,n2,n3;

	float media;
	
	void doMedia (){
		this->media = ((this->n1+this->n2+this->n3)/3);
	}
	void setNotes (float _n1, float _n2, float _n3){
		this->n1 = _n1;
		this->n2 = _n2;
		this->n3 = _n3;
		doMedia();
	} 
	void setName (string _nome){
		this->nome = _nome;
	}
	void setSituation(){
		if (media >= 6)
			situation = "Aprovado por media";
		else if ((media >= 4) && (media < 6))
			situation = "Recuperacao";
		else
			situation = "Reprovado";
	}

};

int main (void){
	
	int nAlunos;
	cout << "Quantos alunos terão a média calculada ?" << endl;
	cin >> nAlunos;
	Aluno matrixAluno[nAlunos];

	int count = 0;
	while (count < nAlunos){
		Aluno aux;
		string nome;
		float n1,n2,n3;
		cout << "Digite o nome do aluno "<< (count+1) << " " <<endl;
		cin >> nome;
		cout << "Digite a nota 1: " << endl;
		cin >> n1;
		cout << "Digite a nota 2: " << endl;
		cin >> n2;
		cout << "Digite a nota 3: " << endl;
		cin >> n3;
		aux.setNotes(n1,n2,n3);
		aux.setName(nome);
		aux.setSituation();
		matrixAluno[count] = aux;
		count+=1;
		cout << endl;
	}
	for (int i=0;i<nAlunos;i++){
		cout << "O aluno " << matrixAluno[i].nome << endl << "Situacao: " << matrixAluno[i].situation << endl << "Nota 1: " << matrixAluno[i].n1 << endl << "Nota 2: " << matrixAluno[i].n2 << endl << "Nota 3: " << matrixAluno[i].n3
			 << endl << "Media Final: ";
			 printf("%.2f \n\n", matrixAluno[i].media); 
	}
	return 0;
}