
typedef struct grafo Grafo;

Grafo *cria_Grafo (int nro_vertices , int grau_max ,
                   int eh_ponderado);

//void buscaLargura_Grafo(Grafo *gr , int ini int *visitado);


int insereAresta(Grafo *gr , int orig , int dest , int eh_digrafo ,
                 float peso);


void libera_Grafo(Grafo * gr);

int removeAresta(Grafo * gr , int orig , int dest ,
                 int eh_digrafo);

void buscaLargura_Grafo(Grafo * gr , int ini , int * visitado);

