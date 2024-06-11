#include <stdio.h>
#include <limits.h>

#define N 4

int cost[N][N] = {
    {10, 2, 6, 5},
    {3, 15, 7, 12},
    {8, 9, 4, 1},
    {4, 7, 2, 10}
};

int min_cost = INT_MAX;
int assigned[N];
int visited[N] = {0};

void assign_task(int worker, int total_cost) {
    if (worker == N) {
        if (total_cost < min_cost) {
            min_cost = total_cost;
            for (int i = 0; i < N; i++) {
                assigned[i] = visited[i];
            }
        }
        return;
    }

    for (int task = 0; task < N; task++) {
        if (!visited[task]) {
            visited[task] = 1;
            assign_task(worker + 1, total_cost + cost[worker][task]);
            visited[task] = 0;
        }
    }
}

int main() {
    assign_task(0, 0);

    printf("Minimum Cost: %d\n", min_cost);
    printf("Assignment: ");
    for (int i = 0; i < N; i++) {
        printf("Worker %d -> Task %d, ", i + 1, assigned[i] + 1);
    }
    printf("\n");

    return 0;
}
