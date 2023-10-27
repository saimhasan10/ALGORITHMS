#include <bits/stdc++.h>
using namespace std;

// quick sort partition
int partition(int a[], int l, int h)
{
    int i = l, j = h;
    int pivot = a[i];

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
        int j = partition(a, low, high);
        quicksort(a, low, j - 1);
        quicksort(a, j + 1, high);
    }
}

// binary search
int binary_search(int a[], int size, int data)
{
    int l, r, mid;
    l = 0, r = size;

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (data == a[mid])
        {
            return mid;
        }
        else if (data > a[mid])
        {
            l = mid + 1;
        }
        else if (data < a[mid])
        {
            r = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n, data;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // send to sort
    quicksort(a, 0, n);

    cout << "which value are you looking for: ";
    cin >> data;
    int result = binary_search(a, n, data);

    // print the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    if (result == -1)
    {
        cout << " Not found" << endl;
    }
    else
    {
        cout << "Found at index: " << result << endl;
    }

    return 0;
}
