#include <bits/stdc++.h>
using namespace std;

// partition part
int partition(int a[], int l, int h)
{
    int i = l, j = h;
    int pivot = a[l];

    while (i < j)
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        // swap i and j
        if (i < j)
        {
            swap(a[i], a[j]);
        }
    }
    swap(a[l], a[j]);
    return j;
}

// quick sort
void quicksort(int a[], int low, int high)
{

    if (low < high)
    {
        // call the partition part to get the pivot right index
        int j = partition(a, low, high);
        quicksort(a, low, j - 1);
        quicksort(a, j + 1, high);
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

    quicksort(a, 0, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
