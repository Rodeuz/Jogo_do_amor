#include<iostream>
#include<stdlib.h>
#include<time.h>
#include <tchar.h>
#include<ctype.h>

int ale(int& rand1);
void i1(char& n1);
void i2(char& n2);
void tela(char n1, char n2);
bool chance(int chancebool);


int main()
{
	char inicial1 = 0, inicial2 = 0, opcao = 0;


	_tsetlocale(LC_ALL, _T("portuguese"));

	opcao = 'S';
	while (opcao == 'S')
	{
		system("cls");
		system("color 07");
		std::cout << "*****Guru do Amor*****\n\n\n";
		i1(inicial1);
		i2(inicial2);
		std::cout << "\n\n";
		tela(inicial1, inicial2);
		std::cout << "\n";
		std::cout << "  Deseja tentar novamente ? S/N ";
		std::cin >> opcao;
		opcao = toupper(opcao);
	}
}

void i1(char& n1)
{
	std::cout << "Digte a primeira inicial: ";
	std::cin >> n1;
	n1 = toupper(n1);

}
void i2(char& n2)
{
	std::cout << "\nDigite a segunda inicial: ";
	std::cin >> n2;
	n2 = toupper(n2);


}
int Aleatorio(int& rand1)
{

	srand((unsigned)time(0));
	rand1 = (rand() % 100);
	return rand1;
}
bool chance(int chancebool)
{
	if (chancebool > 50)
	{
		return true;
	}
	return false;
}
void tela(char n1, char n2)
{
	int NumAleatorio = 0;
	system("cls");
	system("color 05");

	std::cout << "\n  " << n1 << "+" << n2 << "\n\n";
	std::cout << "  " << Aleatorio(NumAleatorio) << "% de chance de dar certo" << "\n";
	if (chance(NumAleatorio))
	{
		std::cout << "  UAU você e a sua paquera tem muita chance de darem certo" << std::endl;

	}
	else
		std::cout << "  Poxa pelo visto voc�s n�o combinam tanto mas não desista" << std::endl;

}
