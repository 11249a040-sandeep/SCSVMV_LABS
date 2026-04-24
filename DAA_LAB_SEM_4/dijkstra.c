/*
Program: Dijkstra Algorithm

Aim:
To find shortest path from source vertex.
*/

#include <stdio.h>

#define V 5
#define INF 999999

int min(int dist[], int visited[])
{
    int min = INF, index = -1;

    for (int i = 0; i < V; i++)
        if (!visited[i] && dist[i] < min)
        {
            min = dist[i];
            index = i;
        }

    return index;
}

void dijkstra(int graph[V][V])
{
    int dist[V], visited[V] = {0};

    for (int i = 0; i < V; i++)
        dist[i] = INF;

    dist[0] = 0;

    for (int i = 0; i < V; i++)
    {
        int u = min(dist, visited);
        visited[u] = 1;

        for (int j = 0; j < V; j++)
            if (graph[u][j] && dist[j] > dist[u] + graph[u][j])
                dist[j] = dist[u] + graph[u][j];
    }

    printf("Vertex Distance\n");
    for (int i = 0; i < V; i++)
        printf("%d -> %d\n", i, dist[i]);
}

int main()
{
    int graph[V][V] = {
        {0,2,3,0,0},
        {2,0,5,3,0},
        {3,5,0,0,4},
        {0,3,0,0,2},
        {0,0,4,2,0}
    };

    dijkstra(graph);
    return 0;
}

/*
Sample Output:

Vertex Distance
0 -> 0
1 -> 2
2 -> 3
3 -> 5
4 -> 7
*/