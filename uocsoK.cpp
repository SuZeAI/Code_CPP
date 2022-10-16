#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, count = 0 ;
        cin >> n >> k;
        for (int i = 2; i <= sqrt(n); i++)
        {
            while(n % i == 0)
            {
                count++;
                if (count == k) 
                {
                    cout << i;
                    break;
                }
                n /= i;
            }
            if (count == k) break;           
        }
        if (count == k) 
            {
                cout << endl;   
                continue; 
            }
        if (n != 1)
        {
            count++;
            if (count == k )
                cout << n;
            else  
                cout << "-1";
        }
        else 
            cout << "-1";
        cout << endl;
    }
}