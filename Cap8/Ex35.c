//Treinamento em Linguagem C - Victorine Viviane Mizrahi
//Capítulo 8 - Novos tipos de dados com STRUCT, TYPEDEF, UNION e ENUM
//Exercícios 35
//oswaldocostaneto@hotmail.com

#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char nome[15];
    char abrevia[3];
    int dia, mes;
}Estrutura;
Estrutura Mes[12]={{"janeiro",    "jan",31,1},
                   {"fevereiro",  "fev",28,2},
                   {"marco",  "mar",31,3},
                   {"abril",  "abr",30,4},
                   {"maio",  "mai",31,5},
                   {"junho",  "jun",30,6},
                   {"julho",  "jul",31,7},
                   {"agosto",  "ago",31,8},
                   {"setembro",  "set",30,9},
                   {"outubro",  "out",31,10},
                   {"novembro",  "nov",30,11},
                   {"dezembro",  "dez",31,12},
};
int main(){
    int i;

    printf("Qual mes em numero inteiro? ");
    scanf("%d",&i);

    printf("Existem %d dias do ano ate esse mes.\n", funcao(i));

    system("pause");
    return 0;
}

int funcao(int n){
    int dias_totais=0;
    for(int j=1;j<n;j++){
        dias_totais+=Mes[j-1].dia;
    }
    return dias_totais;
}
