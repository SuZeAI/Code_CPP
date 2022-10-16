#include <bits/stdc++.h>

using namespace std;
bool comp(int a, int b)
{
    return a < b;
}
int main()

{
    int t;
    cin >> t;
    while(t--)
    {
        cout << max({-1, 12, 14, 14}, comp);
    }
}