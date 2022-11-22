#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char space[40] = "  ";

typedef struct vertice {
    int vertice; 
    struct vertice *prox; 
}Vertice;

typedef struct vizinhos {
    Vertice *la; 
}Vizinhos;

typedef struct grafo { 
    int vertices; 
    int arestas; 
    Vizinhos *adj; 
}Grafo;

Grafo *criaGrafo(int vertices, int arestas){
    Grafo *grafo = (Grafo *)malloc(sizeof(Grafo));
    grafo->vertices = vertices;
    grafo->arestas = arestas;
    grafo->adj = (Vizinhos *)malloc(vertices*sizeof(Vizinhos));
    
    for(int i = 0; i < vertices; i++)
        grafo->adj[i].la = NULL;

    return grafo;
}

void criaAresta(Grafo *grafo, int vInicial, int vDestino){
    Vertice *aux, *novo = (Vertice *)malloc(sizeof(Vertice));
    novo->vertice = vDestino;
    if(grafo->adj[vInicial].la == NULL){
        novo->prox = NULL;
        grafo->adj[vInicial].la = novo;
    }else if(novo->vertice < (grafo->adj[vInicial].la)->vertice){
        novo->prox = grafo->adj[vInicial].la;
        grafo->adj[vInicial].la = novo;
    }else{
        aux = grafo->adj[vInicial].la;

        while(aux->prox && novo->vertice > aux->prox->vertice)
            aux = aux->prox;
        if (novo->vertice != aux->vertice){    
            novo->prox = aux->prox;
            aux->prox = novo;
        }
    }
}

void visitaDfs(Grafo *grafo, int vertice, int *visitados){
    visitados[vertice] = 1;
    Vertice *v = grafo->adj[vertice].la;

    if(v == NULL)
        strncpy(space, space+2, strlen(space));

    while(v){
        if(visitados[v->vertice] == 0){ // se não tiver sido visitado
            printf("%s", space);
            strcat(space, "  ");
            printf("%d-%d pathR(G,%d)\n", vertice, v->vertice, v->vertice);
            visitaDfs(grafo, v->vertice, visitados);
            if(grafo->adj[v->vertice].la != NULL)
                strncpy(space, space+2, strlen(space));
        }else
            printf("%s%d-%d\n", space, vertice, v->vertice);
        v = v->prox;
    }    
}

void dfs(Grafo *grafo){
    int visitados[grafo->vertices];

    for(int i = 0; i < grafo->vertices; i++)
        visitados[i] = 0; // Nenhum foi vizitado ainda

    for(int i = 0; i < grafo->vertices; i++){
        if(visitados[i] == 0){
            strcpy(space, "  ");
            visitaDfs(grafo, i, visitados);
            if(grafo->adj[i].la != NULL)
                printf("\n");
        }
    }
}

int main(){
	int n, v, e, origem, destino, caso = 1;

    scanf("%d",&n);
    
    while(n > 0){
        scanf("%d %d", &v, &e);
        Grafo *grafo = criaGrafo(v, e);
        for(int i=0; i < e; i++){
            scanf("%d %d", &origem, &destino);
            criaAresta(grafo, origem, destino);
        }
        printf("Caso %d:\n", caso++);
        dfs(grafo);
        n--;
    }
    
   return 0;
}