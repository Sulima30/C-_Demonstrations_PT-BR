/* Programa: Aula Operadores Matemáticos (Cálculos Matemáticos Básicos)
 * Autor: Sullivan Lima
 * Versão da Aula: 1.0
 * Ano: 2024
 * Linguagem: C++.
 * Descrição: Esta aula introdutória visa iniciar os conceitos da linguagem C++ referentes ao cálculos matemáticos básicos, utilizando variáveis, com opção de entrada e saída na tela do usuário.
 */

// Inclusões das bibliotecas necessárias para esse código sobre cálculos matemáticos básicos
#include <iostream>
#include <limits>
#include <locale>

using namespace std; // Trecho de código para não precisarmos ficar digitando std:: em todo código de entrada ou saída de dados.

// Função principal do programa
int main(int argc, char **argv)
{
	setlocale(LC_ALL, "Portuguese");

	cout << "Olá, seja bem-vindo ao tópico de operadores matemáticos!" << endl; // Título de boas-vindas para apresentar os operadores matemáticos básicos da linguagem

	// Declaração das variáveis que usaremos na aplicação

	int primeiroNumero;
	int segundoNumero;
	int soma;
	int subtracao;
	int multiplicacao;
	int divisao;
	int modulo;

	// Título da explicação dos números a serem digitados

	cout << "Digite abaixo os números a serem calculados!" << endl
			 << endl;

	// Digitar o primeiro número do cálculo a ser feito

	cout << "Digite o primeiro número: ";
	cin >> primeiroNumero;

	// Digitar o segundo número do cálculo a ser feito

	cout << "Digite o segundo número: ";
	cin >> segundoNumero;

	// Adição (Soma)

	soma = (primeiroNumero + segundoNumero);
	cout << "O valor da soma (adição) que você fez entre o primeiro número e o segundo número é: " << soma << endl;

	// Subtração

	subtracao = (primeiroNumero - segundoNumero);
	cout << "O valor da subtração que você fez entre o primeiro número e o segundo número é: " << subtracao << endl;

	// Multiplicação

	multiplicacao = (primeiroNumero * segundoNumero);
	cout << "O valor da multiplicação que você fez entre o primeiro número e o segundo número é: " << multiplicacao << endl;

	// Divisão com trecho de código condicional para tratar erros relacionados a divisão por 0

	if (segundoNumero != 0)
	{
		divisao = (primeiroNumero / segundoNumero);
		cout << "\nA divisão entre os dois números digitados é: " << divisao << endl;
	}
	else
	{
		cout << "\nErro: Divisão por zero não é permitida." << endl;
	};

	// Divisão Modular com trecho de código condicional para tratar erros relacionados a divisão por 0

	if (segundoNumero != 0)
	{
		modulo = (primeiroNumero % segundoNumero);
		cout << "\nA divisão modular entre os dois números digitados é: " << modulo << endl;
	}
	else
	{
		cout << "\nErro: Divisão por zero não é permitida." << endl;
	};

	return 0;

} // Fim da chave da função principal
