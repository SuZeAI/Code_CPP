#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int check = 0;
        for (int i = 0 ; i < s.length() - 1; i++)
        {
            if (s[i] - s[i + 1] != 1 && s[i] - s[i + 1] != -1 ) 
                {
                    check = 1;
                    break;
                }
        }
        if (check == 0) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
}