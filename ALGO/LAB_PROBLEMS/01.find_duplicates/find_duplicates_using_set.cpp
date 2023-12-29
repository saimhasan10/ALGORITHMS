#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    set<int> st;

    for (int i = 0; i < n; i++)
    {
        st.insert(ar[i]);
    }
    int an = st.size();
    if (n != an)
    {
        cout << "Duplicate" << endl;
    }
    else
    {
        cout << "NO"
    }

    return 0;
}
