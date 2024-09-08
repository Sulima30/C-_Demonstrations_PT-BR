/* Programa: Aula Operadores Relacionais
 * Autor: Sullivan Lima
 * Versão da Aula: 1.0
 * Ano: 2024
 * Linguagem C++
 * Descrição: Esta aula de operadores relacionais visa explicar como usar operadores de comparação entre variáveis numéricas. O programa permite a entrada de valores pelo usuário e exibe os resultados das comparações.
 */

#include <iostream> // Biblioteca padrão de entrada e saída de dados
using namespace std;

int main()
{

	// Interação com o usuário para inserir dois números e realizar a comparação com operadores relacionais

	cout << "Digite o primeiro número a ser comparado: ";
	int primeiroNumero;
	cin >> primeiroNumero;

	cout << "Digite o segundo número a ser comparado: ";
	int segundoNumero;
	cin >> segundoNumero;

	// Nosso primeiro operador relacional será o de igualdade
	bool igual = (primeiroNumero == segundoNumero);

	// Usamos std::boolalpha para imprimir true/false ao invés de 1/0
	cout << boolalpha;
	cout << "\nO Primeiro Número: " << primeiroNumero << " é igual ao Segundo Número: " << segundoNumero << "? " << igual << endl;

	// Operador de diferente
	bool diferente = (primeiroNumero != segundoNumero);
	cout << "O Primeiro Número: " << primeiroNumero << " é diferente do Segundo Número: " << segundoNumero << "? " << diferente << endl;

	// Operador de maior que
	bool primeiroNumeroMaiorQueSegundoNumero = (primeiroNumero > segundoNumero);
	cout << "O Primeiro Número: " << primeiroNumero << " é maior que o Segundo Número: " << segundoNumero << "? " << primeiroNumeroMaiorQueSegundoNumero << endl;

	// Operador de menor que
	bool primeiroNumeroMenorQueSegundoNumero = (primeiroNumero < segundoNumero);
	cout << "O Primeiro Número: " << primeiroNumero << " é menor que o Segundo Número: " << segundoNumero << "? " << primeiroNumeroMenorQueSegundoNumero << endl;

	// Operador de maior ou igual
	bool primeiroNumeroMaiorIgualSegundoNumero = (primeiroNumero >= segundoNumero);
	cout << "O Primeiro Número: " << primeiroNumero << " é maior ou igual ao Segundo Número: " << segundoNumero << "? " << primeiroNumeroMaiorIgualSegundoNumero << endl;

	// Operador de menor ou igual
	bool primeiroNumeroMenorIgualSegundoNumero = (primeiroNumero <= segundoNumero);
	cout << "O Primeiro Número: " << primeiroNumero << " é menor ou igual ao Segundo Número: " << segundoNumero << "? " << primeiroNumeroMenorIgualSegundoNumero << endl;

	return 0;
}
