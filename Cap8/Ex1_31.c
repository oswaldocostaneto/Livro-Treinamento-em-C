//Treinamento em Linguagem C - Victorine Viviane Mizrahi
//Capítulo 8 - Novos tipos de dados com STRUCT, TYPEDEF, UNION e ENUM
//Exercícios 1 a 31
//oswaldocostaneto@hotmail.com

Exercício 1.
    a) 2
    b) 2
    c) 1
    d) 2
    e) 1
    f) 1

Exercício 2.
    Verdadeiro. Ao declarar uma variável struct, o programa reserva espeço na memória o número de bytes
    suficientes para armazenar todos os seus membros.

Exercício 3.
    Resp.: c)
    A letra d) só estaria correta se houvesse a informação "diferentes", pois matrizes também são capazes
    de armazear uma lista de dados, porés dados iguais.

Exercício 4.
    Resp.: c)

Exercício 5.
    Falso. A sintaxe de declaração de variáveis struct são similares, visto que, ao ser criada uma estrutura,
    o conjunto 'struct NOME' funciona como um tipo, assim como int, float, double, etc.
     struct NOME variável        int variável
    |-----------|               |---|
        TIPO                     TIPO

Exercício 6.
    struct veiculo carro;

Exercício 7.
    Resp.: d)
    Para acessar uma variável estrutura, deve-se utilizar a seguinte sintaxe:
        typedef struct Tipo{
            char Ch[10];
        }Tipo;
        Tipo.ch[0]='a';

Exercício 8.
    a) struct Corpo{ /* define estrutura    */
        float altura;
        float peso;
       }Joao; /*    declara variável    */

    b) Joao.altura = 1.68;

    c) struct casal{
            struct Corpo Maria;
            struct Corpo Jose;
       }casal;

    d) struct casal matriz[10];

    e) matriz[0].Maria.altura=1.63;
       matriz[0].Maria.peso=59.5;
       matriz[0].Jose.altura=1.78;
       matriz[0].Jose.peso=82.6;

Exercício 9.
    Verdadeiro.

Exercício 10.
    a) verdadeiro.
    b) falso. Para realizar operações aritiméticas, deve-se fazer membro a membro.
    c) verdadeiro.
    d) falso. idem b)

Exercício 11.
    a) V
    b) V
    c) F
    d) F

Exercício 12.
    Verdadeiro. Estruturas podem ser passadas como argumentos de funções da mesma forma que variáveis
    simples. O nome da estrutura em C não é um endereço.

Exercício 13.
    struct Tempo{
        int hora, min, seg;
    };

Exercício 14.
    struct Dados{
        char letras_placa[3];
        int num_placa;
        char marca_veiculo[10];
        struct Tempo entrada;
        struct Tempo saida;
    };

Exercício 15.
    Resp.: c)
    Declarações com typedef não produzem novos tipos de dados. Criam apenas novos nomes (sinônimos)
    para os tipos existentes.

Exercício 16.
    Resp.: c)
    A letra a) está errada, pois 'viagem' não é uma variável e sim função.
    A letra b) está errada pelo mesmo motivo do Exercício 15, typedef não produz novos tipos de dados.
    A letra d) está errada, pois a sintaxe para o typedef está correta.

Exercício 17.
    Resp.: c)

Exercício 18.
    enum Frutas{Pera, Maca, Figo, Manga, Uva};

Exercício 19.
    enum Frutas Arvore;
    enum Frutas Feirante;

    Arvore = Figo;
    Feirante = Uva;

Exercício 20.
    Arvore: 2
    Feirante: 4
    A palavra enum enumera a lista de nomes automaticamente, dando-lhes números em sequência. Caso não
    seja determinado pelo programador algo diferente, o modo default enumera esses nomes a partir de 0.

Exercício 21.
    Resp.: b) e d) estão corretas.
    É permitida a operação aritmética entre os nomes da lista enumerada, pois os mesmos comportam-se
    como inteiros.

Exercício 22.
    Não é possível dar os valores informados, pois são valores float. Tipos enumerados apenas podem
    receber valores int. Caso declare valores float para os nomes do conjunto, o compilador informará
    erro.

Exercício 23.
    Ambos servem para criar novos tipos de dados, entretanto, a principal diferença entre struct e
    union está no fato de que uma union utilizam um mesmo espaço de memória compartilhado com todos
    os seus diferentes membros, enquanto uma struct aloca um espaço diferente de memória para cada
    membro.

Exercício 24.
    Resp.: d)

Exercício 25.
    Resp.: b)
    Quando uma variável do tipo union é declarada, automaticamente é alocado um espaço de memória
    suficiente para conter seu MAIOR MEMBRO.

Exercício 26.
    Resp.: a) e c) estão corretas
    Assim como no Exercício 10.

Exercício 27.
    Verdadeiro. Entretanto, deve-se ter o cuidado de indicar antes qual é o membro corrente da union,
    pois, diferentemente da struct, na union existe apenas um membro de cada vez.

Exercício 28.
    Resp.: a) e b) estão corretas.

Exercício 29.
    Resp.: b)
    Como variáveis tipo union só podem ter membros coexistindo, só se pode declarar um por vez. Para
    inicializar, apenas o primeiro membro deve ser informado o valor.

Exercício 30.
    Verdadeiro. struct e union devem ser criadas em tempo de compilação, logo devem ser da classe
    extern ou static. Caso não informe a classe, automaticamente o compilador criará como static.

Exercício 31.
    Resp.: b), c) e e) estão corretas.
