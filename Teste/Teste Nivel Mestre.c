#include <stdio.h>

int main (){

/* Hora de codar Nivel Mestre: Desenvoler um programa para um sistema de gerenciamento de inventario permitindo comparar diferentes produtos no estoque e seus valores
    Foco: Aprender a usar os operadores relacionais para realizar a comparação e usar os modificadores de tipo, como unsigned e long para obter melhor precisão

    O sistema perimitirá:

    Cadastrar produtos com diferentes caracteristicas
    Comparar a quantidade em estoque e valor total dos produtos, utilizando operadores relacionais

*/

//Declarar variaveis para armazenar os dados dos produtos
//u i quantidade minima

//Definindo os produtos
char produtoA [50] = "Produto A";
char produtoB [50] = "Produto B";

//Definindo variaveis com os valores de estoque
unsigned int estoqueA = 1000;
unsigned int estoqueB = 2000;

//Definindo variaveis com os valores unitários

float valorA = 10.50;
float valorB = 20.40;

//Definindo variaveis com os valores minimos de estoque

unsigned int estoqueMinimoA = 500;
unsigned int estoqueMinimoB = 2500;

//Definindo variaveis para armazenar o valor total dos produtos

double valorTotalA;
double valorTotalB;

//Definindo variaveis para armazenar o resultado das comparações

int resultadoA, resultadoB;


//Exibir as informações dos produtos cadastrados

printf("Produto %s tem estoque %u e o valor unitario é R$ %.2f\n", produtoA, estoqueA, valorA);
printf("Produto %s tem estoque %u e o valor unitario é R$ %.2f\n", produtoB, estoqueB, valorB);

//Comparações com o valor minimo de estoque

resultadoA = estoqueA > estoqueMinimoA;
resultadoB = estoqueB > estoqueMinimoB;

printf("O produto %s tem estoque minimo %d\n", produtoA, resultadoA);
printf("O produto %s tem estoque minimo %d\n", produtoB, resultadoB);

//Comparações entre os valores totais dos produtos

valorTotalA = estoqueA * valorA;
valorTotalB = estoqueB * valorB;

// Mostrando o valor total de A e B e comparando os valores totais
printf("Valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)? 1 Para sim e 0 para não: %d\n", 
       valorTotalA, valorTotalB, valorTotalA > valorTotalB);



















}


