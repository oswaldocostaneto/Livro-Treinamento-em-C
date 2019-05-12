//Treinamento em Linguagem C - Victorine Viviane Mizrahi
//Capítulo 8 - Novos tipos de dados com STRUCT, TYPEDEF, UNION e ENUM
//Exercícios 32
//oswaldocostaneto@hotmail.com

#include <stdio.h>
#include <stdlib.h>


    struct Biblioteca{
        char titulo[30];
        char registro[20];
        union{
            float preco_dolar;
            float preco_real;
        };
    };

int main(){
    struct Biblioteca ITA={"Treinamento em linguagem C.","9788576051916",9.55};

    printf("Titulo: %s\n", ITA.titulo);
    printf("Num registro: %s\n", ITA.registro);
    printf("Preco: %.2f reais.\n", ITA.preco_real);

    system("pause");
    return 0;
}
