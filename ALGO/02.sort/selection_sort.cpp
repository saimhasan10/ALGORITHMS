#include <bits/stdc++.h>
using namespace std;

// selection sort
void selection_sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            // int tmp = a[i];
            // a[i] = a[min];
            // a[min] = tmp;
            swap(a[i], a[min]);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    selection_sort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
