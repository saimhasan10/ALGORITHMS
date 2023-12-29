#include <iostream>
#include <algorithm>

using namespace std;

double fractionalKnapsack(int capacity, int values[], int weights[], int n)
{
    double valuePerWeight[n];

    for (int i = 0; i < n; ++i)
    {
        valuePerWeight[i] = static_cast<double>(values[i]) / weights[i];
    }

    // Sorting by value-to-weight ratio (using a simple bubble sort)
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (valuePerWeight[j] < valuePerWeight[j + 1])
            {
                swap(valuePerWeight[j], valuePerWeight[j + 1]);
                swap(values[j], values[j + 1]);
                swap(weights[j], weights[j + 1]);
            }
        }
    }

    double totalValue = 0.0;
    int remainingCapacity = capacity;

    for (int i = 0; i < n; ++i)
    {
        if (remainingCapacity >= weights[i])
        {
            totalValue += values[i];
            remainingCapacity -= weights[i];
        }
        else
        {
            double fraction = static_cast<double>(remainingCapacity) / weights[i];
            totalValue += fraction * values[i];
            break;
        }
    }

    return totalValue;
}

int main()
{
    int capacity = 50;                          // Knapsack capacity
    int values[] = {60, 100, 120};              // Values of items
    int weights[] = {10, 20, 30};               // Weights of items
    int n = sizeof(values) / sizeof(values[0]); // Number of items

    double maxValue = fractionalKnapsack(capacity, values, weights, n);
    cout << "Maximum value in Knapsack = " << maxValue << endl;

    return 0;
}
