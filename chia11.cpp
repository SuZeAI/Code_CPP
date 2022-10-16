#include <bits/stdc++.h>
using namespace std;
int chia11(string s)
{
    int sum = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(sum >= 11)
            sum %= 11;
        
            sum = sum * 10 + s[i] - 48;
    }
    return sum % 11 == 0 ? 1 : 0;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout << chia11(s) << endl;
    }
}