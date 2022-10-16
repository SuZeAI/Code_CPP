#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string so;
        cin >> so;
        int idx = so.rfind("084");
        while (idx != -1)
        {
            so.erase(idx, 3);
            idx = so.rfind("084");
        }
        cout << so << endl;
    }
}