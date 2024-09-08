/* Programa: Aula Operadores Lógicos 
 * Autor: Sullivan Lima
 * Versão da Aula: 1.0
 * Ano: 2024
 * Linguagem C++
 * Descrição: Esta aula de operadores lógicos visa explicar como usar operadores lógicos para combinar expressões booleanas. O programa permite a entrada de valores booleanos pelo usuário e exibe os resultados das operações lógicas.
*/

#include <iostream>

using namespace std;

// Função principal
int main()
{

	// Enunciado para informar o primeiro valor lógico analisado

	cout << "Digite o primeiro valor booleano (0 para falso (False) / 1 para verdadeiro(True)): ";
	bool primeiroValor;
	cin >> primeiroValor;

	// Enunciado para informar o segundo valor lógico analisado

	cout << "Digite o segundo valor booleano (0 para falso (False) / 1 para verdadeiro(True)): ";
	bool segundoValor;
	cin >> segundoValor;

	// Configurando o cout para imprimir true/false ao invés da 1 ou 0;
	cout << boolalpha;

	// Análise utilizando o operador lógico E (&&).  O operador E lógico (&&) retorna verdadeiro apenas se ambos os valores forem verdadeiros. Caso contrário, retorna falso.
	bool eLogico = (primeiroValor && segundoValor);
	cout << "\nO resultado de " << primeiroValor << " E (&&) " << segundoValor << " é: " << eLogico << endl;

	// Análise utilizando o operador lógico OU ( ||  ). O operador OU lógico (||) retorna verdadeiro se pelo menos um dos valores for verdadeiro. Retorna falso apenas se ambos forem falsos.
	bool ouLogico = (primeiroValor || segundoValor);
	cout << "\nO resultado de " << primeiroValor << " OU ( || ) " << segundoValor << " é: " << ouLogico << endl
			 << endl;

	// Análise utilizando o operador lógico de negação !. A negação inverte o valor lógico original.
	bool negacaoLogicaPrimeiroValor = !primeiroValor;
	bool negacaoLogicaSegundoValor = !segundoValor;

	cout << "O resultado da negação lógica de " << primeiroValor << " (!" << primeiroValor << ") é: " << negacaoLogicaPrimeiroValor << endl;
	cout << "O resultado da negação lógica de " << segundoValor << " (!" << segundoValor << ") é: " << negacaoLogicaSegundoValor << endl;

	// Análise utilizando o operador lógico OU Exclusivo (^). O operador OU Exclusivo (^) retorna verdadeiro se exatamente um dos valores for verdadeiro. Se ambos forem iguais, o resultado é falso.
	bool operadorOuExclusivoLogico = (primeiroValor ^ segundoValor);
	cout << "\nO resultado do OU Exclusivo (^) entre " << primeiroValor << " e " << segundoValor << " é: " << operadorOuExclusivoLogico << endl
			 << endl;

	return 0;
}
