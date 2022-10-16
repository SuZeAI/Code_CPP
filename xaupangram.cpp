#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        int n;
        cin >> s >> n;
        set<char> se;
        for(int i = 0; i < s.length(); i++)
            se.insert(s[i]);
        int len = s.length();
        int lenset = se.size();
        if(26 - lenset <= n && n <= len - lenset)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
}