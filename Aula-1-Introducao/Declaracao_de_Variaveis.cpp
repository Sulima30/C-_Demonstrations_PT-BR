/* Programa: Aula Introdutória
 * Autor: Sullivan Lima
 * Versão da Aula: 1.0
 * Ano: 2024
 * Linguagem C++.
 * Descrição: Esta aula introdutória visa iniciar os conceitos da linguagem C++ referentes a saídas e entradas de dados, utilizando variáveis e local em memória, na tela do usuário.
*/ 

// Os #include que estão abaixo servem para incluir uma diretiva de pre-processador, usados nas inclusões de arquivos de cabeçalhos, declaração de funções, classes, variáveis etc.

// Caso tenhamos algum #include com o nome de um dos nossos arquivos significará que estamos incluindo eles em nosso projeto.

#include <iostream> // Inclusão da biblioteca padrão de entrada e saída de dados
#include <string>		// Inclusão da biblioteca para manipularmos tipos textuais (Strings)
#include <locale>		// Inclusão da biblioteca para uso local, ou seja, manipular de forma regional a formatação de textos, datas, números etc

using namespace std; // Definição de uso padrão, para evitar ficar utilizando std:: a cada uso de funções de entrada ou saída, por exemplo.

// Função principal da aplicação que estamos desenvolvendo. Todo o resto de classes, funções etc
// int argc representa a contagem de argumentos.
// char** argv é um array de strings do tipo vetorial, contém os argumentos do programa.
// int main é a função principal do programa.
// a função int main inicia com { e encerra com }
int main(int argc, char **argv)
{

	setlocale(LC_ALL, "Portuguese"); // Declaração do idioma utilizado na aplicação

	// Declaração das variáveis que utilizaremos. Nomeamos com o nome do tipo da variável.

	int NumeroInteiro; // Declarar tipo  números inteiros de variável. Podemos usar modificadores em tipos int, como: long (longo), short (curto) ou long long (dobro do longo)

	float NumeroReal;					// Declaração do tipo de número real, pontos flutuantes com casas decimais.
	double NumeroMReal;				// Declaração do tipo de números extensos. Sua capacidade de armazenamento é maior que o double.
	char Caracteres;					// Declaração para informar tipo de caracteres.
	string NomesTexto;				// Tipo de declaração textual. Palavras, frases, etc.
	bool Booleanos;						// Tipo de declaração booleanos true ou false (verdadeiro ou falso)
	int *Ponteiros = nullptr; // Inicializado para evitar comportamento indefinido de um ponteiro. Pois temos ponteiros na linguagem.

	// Imprimindo o tamanho dos tipos
	cout << "TÍTULO COM O TAMANHO DE CADA VARIÁVEL\n";
	cout << "Tamanho do Inteiro: " << sizeof(NumeroInteiro) << " Bytes\n";
	cout << "Tamanho do Real: " << sizeof(NumeroReal) << " Bytes.\n";
	cout << "Tamanho do Real Maior: " << sizeof(NumeroMReal) << " Bytes.\n";
	cout << "Tamanho do Caracter: " << sizeof(Caracteres) << " Bytes.\n";
	cout << "Tamanho da String (em caracteres): " << NomesTexto.size() << " caracteres.\n"; // Usar size() para strings
	cout << "Tamanho do Booleano: " << sizeof(Booleanos) << " Bytes.\n";
	cout << "Ponteiros: " << Ponteiros << "\n"; // Mostra nullptr ou o valor do ponteiro se inicializado corretamente

	cout << "TÍTULO COM OS ENDEREÇOS DE MEMÓRIA DAS VARIÁVEIS\n";
	// Imprimindo os endereços de memória
	cout << "Endereço de Memória Inteiro: " << &NumeroInteiro << endl;
	cout << "Endereço de Memória Real: " << &NumeroReal << endl;
	cout << "Endereço de Memória Real Maior: " << &NumeroMReal << endl;
	cout << "Endereço de Memória Caracter: " << &Caracteres << endl;
	cout << "Endereço de String: " << &NomesTexto << endl;
	cout << "Endereço do Booleanos: " << &Booleanos << endl;
	cout << "Ponteiros: " << &Ponteiros << "\n";

	// Como podemos ver, cout <<  realiza a impressão das informações do programa na tela do usuário. Poderíamos ter feito o famosos "Olá, mundo!", mas optamos em colocar saídas um pouco mais funcionais e exlicativas.

	return 0; // retorno da aplicação

} // Fim do bloco int main.
