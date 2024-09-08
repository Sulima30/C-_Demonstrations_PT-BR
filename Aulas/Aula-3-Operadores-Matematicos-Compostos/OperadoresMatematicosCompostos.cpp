/* Programa: Aula Operadores Aritméticos Compostos
 * Autor: Sullivan Lima
 * Versão da Aula: 1.0
 * Ano: 2024
 * Linguagem: C++
 * Descrição: Esta aula de operadores aritméticos compostos visa iniciar os conceitos da linguagem C++ referentes a saídas e entradas de dados na tela do usuário envolvendo operações matemáticas. Aqui não colocamos funções de loop, condicionais, entre outros tratamentos. Apenas algo conceitual para entender quais operadores matemáticos compostos podemos utilizar.
 */

#include <iostream> // Biblioteca para entrada e saída de dados
#include <limits>   // Biblioteca para manipulação de limites (usada na validação de entrada)

using namespace std;

// No código atual, colocamos um tratamento para eventuais erros, como o uso da estrutura condicional se...então (if...else).
// Optamos para que o usuário possa inserir o modificador e o modificado, para que possa entender o comportamento. Embora tenha uma explicação resumida, acreditamos que seja bom ter esse tipo de autocompreensão.

int main()
{

  // Usuário informará o número a ser modificado
  cout << "Digite o valor do número que será modificado: ";
  int numeroModificado;
  cin >> numeroModificado;

  // Verifica se a entrada é válida
  if (cin.fail())
  {
    cin.clear();                                         // Limpa o estado de erro
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Descarta a entrada inválida
    cout << "Entrada inválida! Por favor, digite um número inteiro." << endl;
    return 1; // Sai do programa com código de erro
  }

  // Usuário informará o valor que modificará o número anterior
  cout << "Digite o valor do número modificador: ";
  int numeroModificador;
  cin >> numeroModificador;

  // Verifica se a entrada é válida
  if (cin.fail())
  {
    cin.clear();                                         // Limpa o estado de erro
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Descarta a entrada inválida
    cout << "Entrada inválida! Por favor, digite um número inteiro." << endl;
    return 1; // Sai do programa com código de erro
  }

  // Operador de Adição Composta (+=) que somará o modificador ao número a ser modificado
  numeroModificado += numeroModificador;
  cout << "\nNúmero Modificado com a adição composta (+=): " << numeroModificado;

  // Operador de Subtração Composta (-=) que subtrairá o modificador ao número a ser modificado
  numeroModificado -= numeroModificador;
  cout << "\nNúmero Modificado com a subtração composta (-=): " << numeroModificado;

  // Operador de Multiplicação Composta (*=) que multiplicará o modificador ao número a ser modificado
  numeroModificado *= numeroModificador;
  cout << "\nNúmero Modificado com a multiplicação composta (*=): " << numeroModificado;

  // Operador de Divisão Composta (/=) que dividirá o número modificado pelo modificador
  if (numeroModificador != 0)
  {
    numeroModificado /= numeroModificador;
    cout << "\nNúmero Modificado com a divisão composta (/=): " << numeroModificado;
  }
  else
  {
    cout << "\nDivisão por zero não é permitida.";
  }

  // Operador de Divisão Modular Composta (%=) que aplicará a divisão modular
  if (numeroModificador != 0)
  {
    numeroModificado %= numeroModificador;
    cout << "\nNúmero Modificado com a divisão composta modular (%=): " << numeroModificado;
  }
  else
  {
    cout << "\nDivisão modular por zero não é permitida.";
  }

  /*
   É interessante termos a ideia de que os operadores a seguir são bastante utilizados, especialmente em operações de baixo nível.
   Para fins didáticos e para demonstrar a possibilidade, incluímos esses operadores.
  */

  // Operador de Deslocamento Composto à Esquerda (<<=)
  numeroModificado <<= numeroModificador;
  cout << "\nNúmero Modificado com o deslocamento composto à esquerda (<<=): " << numeroModificado;

  // Operador de Deslocamento Composto à Direita (>>=)
  numeroModificado >>= numeroModificador;
  cout << "\nNúmero Modificado com o deslocamento composto à direita (>>=): " << numeroModificado;

  // Operador de Deslocamento Composto à Direita com preenchimento zero (simulando >>> do Java)
  // Em C++, não existe o operador '>>>'. Para simular, convertemos para unsigned int
  unsigned int u_numeroModificado = static_cast<unsigned int>(numeroModificado);
  u_numeroModificado >>= numeroModificador;
  cout << "\nNúmero Modificado com o deslocamento composto à direita com preenchimento zero (>>>): " << u_numeroModificado;

  // Operador E (AND) bit a bit composto (&=)
  numeroModificado &= numeroModificador;
  cout << "\nNúmero Modificado com o operador E (AND) (&=): " << numeroModificado;

  // Operador OU (OR) bit a bit composto (|=)
  numeroModificado |= numeroModificador;
  cout << "\nNúmero Modificado com o operador OU (OR) (|=): " << numeroModificado;

  // Operador OU Exclusivo (XOR) bit a bit composto (^=)
  numeroModificado ^= numeroModificador;
  cout << "\nNúmero Modificado com o operador OU Exclusivo (XOR) (^=): " << numeroModificado;

  return 0; // Retorno da aplicação
}
