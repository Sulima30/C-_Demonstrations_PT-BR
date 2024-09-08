/* Programa: Aula Estrutura de Controle Condicional: Se / Se...Então / Casos Certos (Switch)
 * Autor: Sullivan Lima
 * Versão da Aula: 1.0
 * Ano: 2024
 * Linguagem C++
 * Descrição: Esta aula visa iniciar os conceitos da linguagem C++ referentes à estrutura de controle condicional envolvendo os casos do Se (if) / Se...Então (if...else) / Casos Certos (switch).
 */

#include <iostream> // inclusão da biblioteca padrão para entrada e saída de dados

using namespace std;

int main()
{

  int nota; // Variável para testar as condições. Seria a nota do aluno, por exemplo.

  cout << "Digite a nota do aluno para realizar a análise condicional: ";
  cin >> nota;

  // Início da primeira estrutura condicional. SE.
  // Condicional simples, apenas o SE. Se algo for satisfeito. OK. Senão, encerra o programa.
  if (nota > 7)
  {
    cout << "\nParabéns! A nota digitada foi: " << nota << ".Aprovado!" << endl;
  }
  // Fim da estrutura  condicional IF (SE).

  // INÍCIO DA ESTRUTURA CONDICIONAL SE...ENTÃO. IF...ELSE.
  // Nessa estrutura condicional, temos uma situação verdadeira e outra falsa. É mais completa que o SE sozinho.
  if (nota >= 7)
  {
    cout << "\nVocê digitou: " << nota << ". Condição satisfeita, Aprovado!" << endl;
  }
  else
  {
    cout << "\nCondição não satisfeita. Reprovado!" << endl;
  }

  // ESTRUTURA CONDICIONAL SE...ENTÃO. IF...ELSE
  // No IF...ELSE nós temos a situação onde a primeira análise se for verdadeira diz em recuperação. Se a segunda for verdadeira, mas não for igual a primeira diz, aprovado. E se a terceira for falsa, quando não tiver em nenhum dos laços anteriores, temos a situação de reprovado.
  // No IF...ELSE temos a situação de várias opções possíveis, incluindo, podemos fazer um IF...ELSE aninhado.

  if (nota >= 4 && nota < 7)
  {
    cout << "\n\nVocê digitou " << nota << ", que é uma nota entre 4 e 7. O aluno está em recuperação.\n";
  }
  else if (nota >= 7)
  {
    cout << "\nVocê digitou " << nota << ", que é uma nota maior ou igual a 7. O aluno está aprovado.\n";
  }
  else
  {
    cout << "\nVocê digitou " << nota << ", que é menor que 4. O aluno está reprovado.\n";
  }

  // ESTRUTURA CONDICIONAL DO SWITCH (QUE SERIA UMA SITUAÇÃO DE CASOS DE USO)
  // Estrutura condicional SWITCH temos casos de uso, nesse exemplo colocamos 10 casos possíveis e cada um retornará o próprio valor de nota digitado.
  // O Switch é um caso de uso específico que podemos utilizar de forma mais simplificada que o if, mas temos que analisar cada caso de uso em si.

  switch (nota)
  {
  case 0:
    cout << "\n\nVocê digitou " << nota << ".\n";
    break;
  case 1:
    cout << "Você digitou " << nota << ".\n";
    break;
  case 2:
    cout << "Você digitou " << nota << ".\n";
    break;
  case 3:
    cout << "Você digitou " << nota << ".\n";
    break;
  case 4:
    cout << "Você digitou " << nota << ".\n";
    break;
  case 5:
    cout << "Você digitou " << nota << ".\n";
    break;
  case 6:
    cout << "Você digitou " << nota << ".\n";
    break;
  case 7:
    cout << "Você digitou " << nota << ".\n";
    break;
  case 8:
    cout << "Você digitou " << nota << ".\n";
    break;
  case 9:
    cout << "Você digitou " << nota << ".\n";
    break;
  case 10:
    cout << "Você digitou " << nota << ".\n";
    break;
  default:
    cout << "Digitou um valor fora do intervalo de 0 a 10.\n";
  }
  // Fim do bloco SWITCH

  return 0;
}
