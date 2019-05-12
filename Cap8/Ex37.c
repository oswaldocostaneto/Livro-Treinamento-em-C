//Treinamento em Linguagem C - Victorine Viviane Mizrahi
//Capítulo 8 - Novos tipos de dados com STRUCT, TYPEDEF, UNION e ENUM
//Exercícios 37
//oswaldocostaneto@hotmail.com

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int funcao1(int, int, int);
int funcao2(int, char[], int);

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
    int dia,mes,ano;
    char M[15];


    printf("Qual a data? ");
    scanf(" %d %s %d",&dia,M,&ano);

    if(abs(atoi(M))){
        mes=atoi(M);
        printf("Existem %d dias do ano ate esse mes.\n", funcao1(dia,mes,ano));
    }
    else printf("Existem %d dias do ano ate esse mes.\n", funcao2(dia,M,ano));

    system("pause");
    return 0;
}

int funcao1(int d,int m, int a){
    int dias_totais=0;

    /*  dias ate mes atual   */
    for(int j=1;j<m;j++){
        dias_totais+=Mes[j-1].dia;
    }

    /*  dias do mes atual   */
    for(int j=1;j<=d;j++){
        dias_totais++;
    }

    return dias_totais;
}

int funcao2(int d, char m[], int a){
    int dias_totais=0;
    int i;
    int booleano=0;

    /*  dias ate mes atual   */
    for(i=0;i<11;i++){
        if(!strcmp(m,Mes[i].nome)){
            break;
            booleano=1;
        }
    }
    if(!booleano){
        for(i=0;i<11;i++){
            if(!strcmp(m,Mes[i].abrevia))
                break;
        }
    }
    for(int j=0;j<i;j++){
        dias_totais+=Mes[j].dia;
    }

    /*  dias do mes atual   */
    for(int j=1;j<=d;j++){
        dias_totais++;
    }

    return dias_totais;
}
