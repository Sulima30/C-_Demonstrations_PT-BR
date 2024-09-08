/* Programa: Aula Estrutura de Repetição usando FOR, WHILE e DO...WHILE
 * Autor: Sullivan Lima
 * Versão da Aula: 1.0
 * Ano: 2024
 * Linguagem C++. Versão 23
 * Descrição: Esta aula visa iniciar os conceitos da linguagem C++ referentes a estrutura de repetição usando FOR, WHILE, DO...WHILE 
*/ 

#include <iostream> // Biblioteca para entrada e saída de dados

using namespace std;

int main() {
    // As estruturas de repetição permitem executar blocos de código várias vezes com base em condições definidas.
    // Vamos explorar três estruturas principais: FOR, WHILE e DO...WHILE.

    // Estrutura de Repetição FOR
    // O FOR é usado quando sabemos o número de repetições de antemão.
    // Consiste em três partes: inicialização, condição e atualização.
    // Iniciamos "numeroInteiro" em 0 e repetimos o bloco até que "numeroInteiro" seja menor que 5.
    cout << "\n\nTítulo do Bloco FOR\n\n";
    for (int numeroInteiro = 0; numeroInteiro < 5; numeroInteiro++) {
        // O valor de "numeroInteiro" será exibido em cada iteração.
        cout << "Número Inteiro: " << numeroInteiro << endl;
    }

    // BLOCO WHILE
    // O WHILE é usado para repetir um bloco de código enquanto uma condição for verdadeira.
    // A condição é verificada antes de cada iteração.
    // A repetição continua até que a condição se torne falsa.
    int numeroInteiroWhile = 0; // Variável usada no laço WHILE
    
    cout << "\n\nTítulo do Bloco WHILE\n\n";
    while (numeroInteiroWhile < 5) {
        // Imprime o número enquanto a condição (numeroInteiroWhile < 5) for verdadeira.
        cout << "Número impresso na tela: " << numeroInteiroWhile << endl;
        numeroInteiroWhile++; // Incrementa a variável em cada iteração.
    }

    // DO...WHILE
    // A principal diferença entre DO...WHILE e WHILE é que o DO...WHILE executa o código pelo menos uma vez,
    // mesmo que a condição seja falsa desde o início.
    int numeroInteiroDoWhile = 0; // Variável para o laço DO...WHILE
    
    cout << "\n\nTítulo do Bloco DO...WHILE\n\n";
    do {
        // Imprime o número pelo menos uma vez.
        cout << "Número impresso na tela usando o DO...While: " << numeroInteiroDoWhile << endl;
        numeroInteiroDoWhile++; // Incremento
    } while (numeroInteiroDoWhile < 5); // Continua enquanto a condição for verdadeira.

    // FOR com BREAK e CONTINUE
    // Podemos usar "break" para sair de um laço antes de ele terminar e "continue" para pular para a próxima iteração.
    cout << "\n\nTítulo do Bloco FOR COM INTERRUPÇÃO\n\n";
    
    for (int inteiroForComandosBreakEContinue = 0; inteiroForComandosBreakEContinue < 10; inteiroForComandosBreakEContinue++) {
        if (inteiroForComandosBreakEContinue == 5) {
            break; // Interrompe o laço quando o número for 5.
        }
        
        if (inteiroForComandosBreakEContinue % 2 == 0) {
            continue; // Pula para a próxima iteração se o número for par.
        }
        
        // Imprime apenas números ímpares, pois os pares são ignorados pelo "continue".
        cout << "Número ímpar: " << inteiroForComandosBreakEContinue << endl;
    }

    // FOR aninhado
    // O FOR aninhado é útil para estruturas bidimensionais, como matrizes.
    // O laço interno é executado completamente para cada iteração do laço externo.
    cout << "\n\nTítulo do Bloco FOR Aninhado\n\n";
    for (int inteiroAninhado1 = 0; inteiroAninhado1 < 3; inteiroAninhado1++) {
        for (int inteiroAninhado2 = 0; inteiroAninhado2 < 3; inteiroAninhado2++) {
            // Imprime todos os pares possíveis de inteiros dentro das faixas definidas.
            cout << "Inteiro Aninhado 1: " << inteiroAninhado1 << ", Inteiro Aninhado 2: " << inteiroAninhado2 << endl;
        }
    }

    return 0; // Finaliza o programa com sucesso.
}
