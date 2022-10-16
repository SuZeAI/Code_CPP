#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++)
    {
        if( s[i] != 'A' && s[i] != 'E' && s[i] !=  'I' && s[i] !=  'O' && s[i] !=  'U' && s[i] != 'Y' && s[i] != 'a' && s[i] != 'e' && s[i] !=  'i' && s[i] !=  'o' && s[i] !=  'u' && s[i] != 'y' )
        {
            if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
            cout << "." << s[i] ;
        }
    }
}