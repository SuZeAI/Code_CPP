#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        set<int> v;
        for(int i = 0; i < n;  i++)
        {
            int m;
            cin >> m;
            v.insert(m);
        }
        cout << *v.rend() << endl;
    }
}