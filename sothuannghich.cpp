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
        int check = 0;
        for (int i = 0; i < so.length()/2; i++)
        {
            if ( so[i] != so[so.length() -  1 - i])
                {
                    check = 1;
                    break;
                }
        }
        if (check == 0) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
}