#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if (a[i] <= a[j])
            {
                a[i] = a[j];
            }
        }
    }
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if (a[i] == a[j])
            {
                flag = true;
                break;
            }
        }
        break;
    }
    if (flag)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}
