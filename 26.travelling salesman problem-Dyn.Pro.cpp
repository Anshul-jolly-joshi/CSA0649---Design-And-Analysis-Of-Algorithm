#include <stdio.h>
#include <limits.h>

#define V 4 // Number of vertices in the graph

int tsp(int graph[][V], int mask, int pos, int dp[][1 << V]) {
    if (mask == (1 << V) - 1)
        return graph[pos][0];

    if (dp[pos][mask] != -1)
        return dp[pos][mask];

    int minCost = INT_MAX;

    for (int city = 0; city < V; city++) {
        if ((mask & (1 << city)) == 0) {
            int newCost = graph[pos][city] + tsp(graph, mask | (1 << city), city, dp);
            minCost = (newCost < minCost) ? newCost : minCost;
        }
    }

    return dp[pos][mask] = minCost;
}

int main() {
    int graph[V][V] = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    int dp[V][1 << V];
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < (1 << V); j++) {
            dp[i][j] = -1;
        }
    }

    int minCost = tsp(graph, 1, 0, dp);
    printf("Minimum cost for the Travelling Salesman Problem is: %d\n", minCost);

    return 0;
}
