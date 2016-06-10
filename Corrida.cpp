#include <iostream> //Incluindo as 3 bibliotecas//
#include <string>
#include <ctime>
//Está usando os recursos de entrada e saída das 3 bibliotecas//
using namespace std;
//void é uma função do progrma//
//Está criando pequenos pedaços separados de códigos do programa//
void imprimir_espacos(int total);
//O seguinte comando - "int argc, char* args" é necessario para o programa para que o usuário passe alguns argumentos//
int main(int argc, char* args[]) //Função principal do programa//
{
	bool sair = false; //bool pode ter valores verdadeiros e falsos//
	string mot1; //Variável motorista 1//
	string mot2; //Variável motorista 2//
	int rodada = 0, rodada2 = 0; //Variável inteira com o valor 0//
	int total_espacos = 10; //Variável inteira com o valor 10//


	cout << "Digite o nome do piloto 1:" << endl; //Imprime na tela//
	cin >> mot1; //Salva na variável//
	cout << "Digite o nome do piloto 2:" << endl; //Imprime na tela//
	cin >> mot2; //Salva na variável//

	//Este laço é usado para quando não sabemos quantas vezes vamos repetir o laço ou quando vamos parar//
	while (sair == false) //Está dizendo para quando queremos sair ou não do laço//
	{

		srand((int)time(0)); //A função rand() gera uma sequência de valores que se repete igual a si própria sempre que o programa é executado//
		total_espacos = rand() % 3 + 1; //Gera um número aleatório//
		rodada = rodada + total_espacos; //"rodada" é somada com "total_espacos" que em seguida, substitui o número de rodadas passadas//
		
		//Vai imprimir na tela o que está pedindo nos comandos à baixo//
		cout << "LARGADA                                                                      LINHA DE CHAGADA" << endl;
		cout << "piloto " << mot1 << endl;
		imprimir_espacos(rodada); //Imprimirá a quantidade de espaços//
		cout << "   _  " << endl;
		imprimir_espacos(rodada); //Imprimirá a quantidade de espaços// 
		cout << " -Lo=o> " << endl;
		cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;
		
		//Vai imprimir na tela o que está pedindo nos comandos à baixo//
		srand((int)time(0));
		total_espacos = rand() % 3 + 1;
		rodada2 = rodada2 + total_espacos;
		
		cout << "LARGADA                                                                      LINHA DE CHAGADA" << endl;
		cout << "piloto " << mot2 << endl;
		imprimir_espacos(rodada2);
		cout << "   _  " << endl;
		imprimir_espacos(rodada2);
		cout << " -Lo=o> " << endl;
		cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;

		cout << "Próxima jogada? (Digite enter)" << endl; //Este comando está imprimindo na tela para o jogador seguir jogando//
		

		system("pause"); //O programa vai ficar pausado até que algum usuário clique alguma tecla//
		
		system("cls"); //Isso limpa à tela//
		


		if (rodada >= 20 || rodada2 >= 20) //Quando os carrinhos chegarem na rodada 20 eles são obrigados à parar//
		{
			sair = true; //Comando buleano//
		}
		else //Mas, se não...//
		
			system("cls"); //Isso limpa à tela//
		

	
	}
	
	if (rodada = 20) //Se o jagador 1 chegar à 20 primeiro ele ganha//
		cout << mot1 << "Ganhei o primeiro lugar" << endl;
	
	else if (rodada2 = 20) //Se o jogador 2 chegar à 20 primeiro ele ganha//
		cout << mot2 << "Ganhei o primeiro lugar" << endl;
	
	else //Se não, pode empatar//
		cout << "EMPARE" << endl; //Se não, pode empatar// 
	
	
	system("pause"); //Pausa//

	return 0; //Retorna 0//
}

void imprimir_espacos(int total) //Está é outra função//
{
	for (int qntd_atual = 0; qntd_atual < total; qntd_atual++) //O laço for está com a variável "qntd_atual"//

	{
		cout << " ";
	}
}
