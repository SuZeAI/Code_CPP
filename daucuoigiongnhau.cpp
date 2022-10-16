#include <bits/stdc++.h>

using namespace std;\
int socap(int n)
{
    return n * (n + 1) /2;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        set<char> v;
        set<char>::iterator idx;
        for(int i = 0; i < s.length();i++)
            v.insert(s[i]);
        int sum = 0;
        for(idx = v.begin(); idx != v.end(); idx++)
            sum += socap(count(s.begin(), s.end(), *idx) - 1);
    
        cout << s.length() + sum << "\n";
    }
}