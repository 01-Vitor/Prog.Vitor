#include <stdio.h>

/* 

Modificadores de Tipos de Dados

short, long, signed, unsigned (signed é o padrão, não é necessário declarar)
    
    valor de int: -2.147.483.648 a 2.147.483.647
    valor de unsigned int: 0 a 4.294.967.295
    valor de long int: -2.147.483.648 a 2.147.483.647
    valor de unsigned long int: 0 a 4.294.967.295
    valor de long long int: -9.223.372.036.854.775.808 a 9.223.372.036.854.775.807
    valor de unsigned long long int: 0 a 18.446.744.073.709.551.615

        "unsigned pode ser aplicada a int, long int, long long int, float e double
        long pode ser aplicada a int e double
        long long pode ser aplicada a int e double"

    Também pode ser usada para char, sendo:
        char: -128 a 127
        unsigned char: 0 a 255

    unsigned é utilizado para declarar variaveis que não podem ser negativas, aumentando a capacidade de armazenamento de valores positivos
        ex: unsigned int numero = 3000000000; // Este valor excede o limite de um int normal

    long é utilizado para aumentar a capacidade de armazenamento tipos de dados primitivos, podendo ser usado aplicado a int e double permitindo armazenar valores maiores ou com maior precisão
        ex: uma variavel long int pode armazenar valores maiores do que uma variavel int normal, 
        e uma long double pode armazenar valores com maior precisão do que um double normal (dobro do tamanho de um double normal)

    long long é utilizado para aumentar ainda mais a capacidade de armazenamento de tipos de dados primitivos, podendo ser aplicado a int e double
        ex: uma variavel long long int pode armazenar valores maiores do que uma variavel long int,
        e uma long long double pode armazenar valores com maior precisão do que uma long double (duas vezes o tamanho de um long double)

    short é utilizado para diminuir a capacidade de armazenamento de tipos de dados primitivos, podendo ser aplicado a int e double
        ex:: uma variavel short pode armazenar valores menores do que uma variavel int normal

*/