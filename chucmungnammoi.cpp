#include <bits/stdc++.h>

using namespace std;

int main()

{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cin.ignore();
    string s;
    set<string> newyear;
    for(int i = 0; i < n; i++)
    {
        getline(cin, s);
        newyear.insert(s);
    }
    cout << newyear.size();
}