#include <iostream> //Incluindo as 3 bibliotecas//
#include <string>
#include <ctime>
//Est� usando os recursos de entrada e sa�da das 3 bibliotecas//
using namespace std;
//void � uma fun��o do progrma//
//Est� criando pequenos peda�os separados de c�digos do programa//
void imprimir_espacos(int total);
//O seguinte comando - "int argc, char* args" � necessario para o programa para que o usu�rio passe alguns argumentos//
int main(int argc, char* args[]) //Fun��o principal do programa//
{
	bool sair = false; //bool pode ter valores verdadeiros e falsos//
	string mot1; //Vari�vel motorista 1//
	string mot2; //Vari�vel motorista 2//
	int rodada = 0, rodada2 = 0; //Vari�vel inteira com o valor 0//
	int total_espacos = 10; //Vari�vel inteira com o valor 10//


	cout << "Digite o nome do piloto 1:" << endl; //Imprime na tela//
	cin >> mot1; //Salva na vari�vel//
	cout << "Digite o nome do piloto 2:" << endl; //Imprime na tela//
	cin >> mot2; //Salva na vari�vel//

	//Este la�o � usado para quando n�o sabemos quantas vezes vamos repetir o la�o ou quando vamos parar//
	while (sair == false) //Est� dizendo para quando queremos sair ou n�o do la�o//
	{

		srand((int)time(0)); //A fun��o rand() gera uma sequ�ncia de valores que se repete igual a si pr�pria sempre que o programa � executado//
		total_espacos = rand() % 3 + 1; //Gera um n�mero aleat�rio//
		rodada = rodada + total_espacos; //"rodada" � somada com "total_espacos" que em seguida, substitui o n�mero de rodadas passadas//
		
		//Vai imprimir na tela o que est� pedindo nos comandos � baixo//
		cout << "LARGADA                                                                      LINHA DE CHAGADA" << endl;
		cout << "piloto " << mot1 << endl;
		imprimir_espacos(rodada); //Imprimir� a quantidade de espa�os//
		cout << "   _  " << endl;
		imprimir_espacos(rodada); //Imprimir� a quantidade de espa�os// 
		cout << " -Lo=o> " << endl;
		cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;
		
		//Vai imprimir na tela o que est� pedindo nos comandos � baixo//
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

		cout << "Pr�xima jogada? (Digite enter)" << endl; //Este comando est� imprimindo na tela para o jogador seguir jogando//
		

		system("pause"); //O programa vai ficar pausado at� que algum usu�rio clique alguma tecla//
		
		system("cls"); //Isso limpa � tela//
		


		if (rodada >= 20 || rodada2 >= 20) //Quando os carrinhos chegarem na rodada 20 eles s�o obrigados � parar//
		{
			sair = true; //Comando buleano//
		}
		else //Mas, se n�o...//
		
			system("cls"); //Isso limpa � tela//
		

	
	}
	
	if (rodada = 20) //Se o jagador 1 chegar � 20 primeiro ele ganha//
		cout << mot1 << "Ganhei o primeiro lugar" << endl;
	
	else if (rodada2 = 20) //Se o jogador 2 chegar � 20 primeiro ele ganha//
		cout << mot2 << "Ganhei o primeiro lugar" << endl;
	
	else //Se n�o, pode empatar//
		cout << "EMPARE" << endl; //Se n�o, pode empatar// 
	
	
	system("pause"); //Pausa//

	return 0; //Retorna 0//
}

void imprimir_espacos(int total) //Est� � outra fun��o//
{
	for (int qntd_atual = 0; qntd_atual < total; qntd_atual++) //O la�o for est� com a vari�vel "qntd_atual"//

	{
		cout << " ";
	}
}
