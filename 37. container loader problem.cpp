#include <stdio.h>

#define MAX_CONTAINERS 10

int containers[MAX_CONTAINERS];
int stack[MAX_CONTAINERS];
int top = -1;
int n, capacity, current_weight = 0;

void container_loader(int k) {
    if (k == n) {
        printf("Solution: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
        return;
    }

    if (current_weight + containers[k] <= capacity) {
        current_weight += containers[k];
        stack[++top] = containers[k];
        container_loader(k + 1);
        current_weight -= containers[k];
        top--;
    }

    container_loader(k + 1);
}

int main() {
    printf("Enter the number of containers: ");
    scanf("%d", &n);

    printf("Enter the weights of the containers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &containers[i]);
    }

    printf("Enter the capacity of the loader: ");
    scanf("%d", &capacity);

    container_loader(0);

    return 0;
}
