//Treinamento em Linguagem C - Victorine Viviane Mizrahi
//Capítulo 8 - Novos tipos de dados com STRUCT, TYPEDEF, UNION e ENUM
//Exercícios 33
//oswaldocostaneto@hotmail.com

#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char nome[15];
    char abrevia[3];
    int dia, mes;
}Estrutura;

int main(){

    Estrutura Mes={"Maio","Mai",31,5};

    printf("Qual nome do mes?\n"
           "\tresp.: %s\n"
           "Qual abreviacao?\n"
           "\tresp.: %s\n"
           "Qual dia?\n"
           "\tresp.: %d\n"
           "Qual qual mes?\n"
           "\tresp.: %d\n", Mes.nome,Mes.abrevia,Mes.dia,Mes.mes);
    system("pause");
    return 0;
}
