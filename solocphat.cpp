#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string so;
        int check = 0;
        cin >> so;
        for (int i = 0; i < so.length() ; i++ )
            if (so[i] != '0' && so[i] != '6' && so[i] != '8')
                {
                    check = 1;
                    break;
                }
        if (check == 0)
            cout << "YES" << endl;
        else 
            cout << "NO" <<endl;
    }
    return 0;
}