#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, m, check = 0; 
        cin >> a >> m;
        for (int i = 0 ; i < m; i++)
        {
            int tich = a* i;
            if (tich %  m == 1)
            {
                cout << i << endl;
                check = 1;

                break;

            }
        }
        if (check == 0 ) cout << "-1" << endl;
    }
    return 0;
}
