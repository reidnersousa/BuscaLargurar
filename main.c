#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<string.h>
#include"tabelahash.h"
#include "Grafo.h"
#include<time.h>
#define n 10
#define  N 30
int main()
{

    inicializar();
    int s, p;
    somaProdutoPonteiro(3,5,&s,&p);
    printf("Soma =%d  Produto =%d \n",s,p);
    /*
    Grafo *gr;
    gr = cria_Grafo(10 ,7,0);

    insereAresta(gr , 0 , 1 , 0 , 0);
    insereAresta(gr , 1 , 3 , 0 , 0);
    */
    int eh_digrafo = 1;
    Grafo* gr =  cria_Grafo(5,5,0);
    insereAresta (gr , 0 , 1 ,eh_digrafo , 0);
    insereAresta (gr , 1 , 3 ,eh_digrafo , 0);
    insereAresta (gr , 1 , 2 ,eh_digrafo , 0);
    insereAresta (gr , 2 , 4 ,eh_digrafo , 0);
    insereAresta (gr , 3 , 0 ,eh_digrafo , 0);
    insereAresta (gr , 3 , 4 ,eh_digrafo , 0);
    insereAresta (gr , 4 , 1 ,eh_digrafo , 0);
    int vis[5];

    buscaLargura_Grafo(gr , 0 , vis);


    libera_Grafo(gr);
    return 0;
}

