#include <stdio.h>
struct Item {
    int weight;
    int value;
};
void knapsackGreedy(int W, struct Item items[], int n) {
    int i, j, currentWeight;
    float totalValue = 0.0;
    for (i = 0; i < n; i++) {
        items[i].value = items[i].value / items[i].weight;
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (items[i].value < items[j].value) {
                struct Item temp = items[i];
                items[i] = items[j];
                items[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++) {
        if (items[i].weight <= W) {
            totalValue += items[i].value;
            W -= items[i].weight;
        } else {
            totalValue += items[i].value * ((float) W / items[i].weight);
            break;
        }
    }

    printf("Maximum value in Knapsack: %.2f\n", totalValue);
}

int main() {
    int W = 50; // Knapsack capacity
    struct Item items[] = {{10, 60}, {20, 100}, {30, 120}}; // Array of items with weight and value
    int n = sizeof(items) / sizeof(items[0]); // Number of items

    knapsackGreedy(W, items, n);

    return 0;
}
