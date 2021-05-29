/*
 * Program  : Adjacency Matrix Representation of Graph
 * Author : Manish4586
 * Language : C
 */
#include<stdio.h>

    int a, b, V;

void init(int arr[][V])
{
    int i,j;
    for(i = 0; i < V; i++)
        for(j = 0; j < V; j++)
            arr[i][j] = 0;
}

void addEdge(int arr[][V],int src, int dest)
{
     arr[src][dest] = 1;
}

void printAdjMatrix(int arr[][V])
{
     int i, j;

     for(i = 0; i < V; i++)
     {
         for(j = 0; j < V; j++)
         {
             printf("%d ", arr[i][j]);
         }
         printf("\n");
     }
}

int main()
{
    int adjMatrix[V][V];

    init(adjMatrix);
    printf(" Enter No Of Vertices: ");
    scanf("%d", &V);
    for(int i = 0; i < V; i++){
    printf(" Enter No Of Edges: ");
    scanf("%d", &a);
    scanf("%d", &b);
    addEdge(adjMatrix, a, b);
}

    printAdjMatrix(adjMatrix);

    return 0;
}
