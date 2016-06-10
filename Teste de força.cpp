#include <iostream>
#include <string>    //Estou incluindo 3 bibliotecas
#include <ctime>
using namespace std;

int main(int argc, char* args[]) //Aqui est� digitado a fun��o do programa
{
	bool sair = false; //Booleano para verdadeiro ou falso
	string jog1, jog2; //As duas vari�veis est� sendo salva na string
	int vida1 = 10, vida2 = 10; //Aqui est� declarando as vari�veis
	int dado6, dano;
	int A1 = 3, A2 = 3, D1 = 2, D2 = 2;

	//Est� representa��o imprime na tela os jogadores 1 e 2. Em seguida, salva nas suas vari�veis
	cout << "Digite o nome do jogador 1: " << endl;
	cin >> jog1;
	cout << "Digite o nome do jogador 2: " << endl;
	cin >> jog2;

	//Este � o la�o enquanto. A seguinte, as suas consequ�ncias. Caso seja verdade, ser� executado todos os itens que est�o sendo exibidos na tela
	while (sair == false)
	{
		cout << " o                  o" << endl;
		cout << ".T./              \\.T." << endl;
		cout << " ^                  ^" << endl;
		cout << jog1 << "             " << jog2 << endl;
		cout << "Ataque: " << A1 << "          " << "Ataque: " << A2 << endl;
		cout << "Defesa: " << D1 << "          " << "Defesa: " << D2 << endl;
		cout << "Vida:" << vida1 << "            " << "Vida:" << vida2 << endl;

		system("pause");

		//Adicionando uma "semente" ao gerador dos n�meros
		srand((int)time(0));
		//O jogador 1 est� jogando
		dado6 = rand() % 6 + 1;

		if (dado6 > 4)
		{
			dano = A1 - D2;
			vida2 = vida2 - dano;
			cout << jog1 << " Acertou" << endl;
			cin.get();
		}
		else if (dado6 <= 4)
		{
			cout << jog1 << " Errou " << endl;
			cin.get();
		}

		//O jogador 2 est� jogando
		dado6 = rand() % 6 + 1;
		if (dado6 > 4)
		{
			dano = A2 - D1;
			vida1 = vida1 - dano;
			cout << jog2 << " Acertou " << endl;;
			cin.get();
		}
		else if (dado6 <= 4)
		{
			cout << jog2 << " Errou " << endl;
			cin.get();
		}
		system("cls");

		if (vida1 <= 0 || vida2 <= 0)
		{
			sair = true;
		}
	}
	if (vida1 > 0)
		cout << jog1 << " Venceu!" << endl;
	else if (vida2 > 0)
		cout << jog2 << " Venceu!" << endl;
	else
		cout << " Os dois perderam" << endl;
	return 0;
}
