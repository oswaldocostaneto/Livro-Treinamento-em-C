//Treinamento em Linguagem C - Victorine Viviane Mizrahi
//Capítulo 8 - Novos tipos de dados com STRUCT, TYPEDEF, UNION e ENUM
//Exercícios 38
//oswaldocostaneto@hotmail.com

#include <stdio.h>
#include <stdlib.h>
#define ESC 27

int registro(int);
void lista(int);

typedef struct Restaurante{
    char nome[20];
    char endereco[40];
    float preco_medio;
    char tipo_comida[15];
}Restaurante;

Restaurante REST[50];

int main(){
    char c;
    int n=0;

    do{
        printf("Digite R para registrar um restaurante\n"
               "       L para ver a lista de restaurantes\n"
               "       ESC para sair\n");
        fflush(stdin);
        c = getch();
        printf("\n");

        switch(c){
            case 'r':
            case 'R': system("cls");
                      n=registro(n);
                      break;
            case 'l':
            case 'L': system("cls");
                      lista(n);
                      break;
            case ESC: break;
            default:  system("cls");
                      printf("\nOpcao invalida!\n\n");
        }
    }while(c!=ESC);

    return 0;
}

int registro(int i){
    char temp[10];

    printf("Digite o nome do restaurante: ");
    fflush(stdin);
    gets(REST[i].nome);
    printf("Digite o endereco do restaurante: ");
    gets(REST[i].endereco);
    printf("Digite o preco medio do cardapio: ");
    gets(temp);
    REST[i].preco_medio=atof(temp);
    printf("Digite o tipo de comida oferecida: ");
    fflush(stdin);
    gets(REST[i].tipo_comida);
    printf("\n");

    return ++i;
}

void lista(int i){
    int j=0;

    if(i==0){
        printf("Nao ha Restaurantes cadastrados.\n\n");
    }
    else{
        printf("Lista de Restaurantes cadastrados:\n");

        do{
            printf("Restaurante %d:\n\t", j+1);
            printf("nome: %s\n\t", REST[j].nome);
            printf("endereco: %s\n\t", REST[j].endereco);
            printf("preco medio: %.2f\n\t", REST[j].preco_medio);
            printf("tipo de comida: %s\n", REST[j].tipo_comida);
            j++;
        }while(j<i);
        printf("******************** fim da lista ********************\n\n");
    }
}
