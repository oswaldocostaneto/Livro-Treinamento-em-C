//Treinamento em Linguagem C - Victorine Viviane Mizrahi
//Capítulo 8 - Novos tipos de dados com STRUCT, TYPEDEF, UNION e ENUM
//Exercícios 39
//oswaldocostaneto@hotmail.com

#include <stdio.h>
#include <stdlib.h>
#define ESC 27

int registro(int);
void lista(int);

typedef struct Diet{
    char nome[20];
    float peso;
    float calorias;
}Diet;

Diet Dieta[50];

int main(){
    char c;
    int n=0;

    do{
        printf("Digite R para registrar uma comida da dieta\n"
               "       L para ver a dieta\n"
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

    system("cls");

    printf("Voce escolheu sair...\n");
    system("pause");

    return 0;
}

int registro(int i){
    char temp[10];

    printf("Digite o nome da comida: ");
    fflush(stdin);
    gets(Dieta[i].nome);
    printf("Digite o peso da porcao (em gramas): ");
    gets(temp);
    Dieta[i].peso=atof(temp);
    printf("Digite o numero de calorias(em Kcal): ");
    gets(temp);
    Dieta[i].calorias=atof(temp);
    printf("\n");

    return ++i;
}

void lista(int i){
    int j=0;

    if(i==0){
        printf("Nao ha uma dieta cadastrada.\n\n");
    }
    else{
        printf("=====>> Dieta:\n");

        do{
            printf("Comida %d:\n\t", j+1);
            printf("nome: %s\n\t", Dieta[j].nome);
            printf("peso da porcao: %g\n\t", Dieta[j].peso);
            printf("numero de calorias: %g\n", Dieta[j].calorias);
            j++;
        }while(j<i);
        printf("******************** fim da lista ********************\n\n");
    }
}
