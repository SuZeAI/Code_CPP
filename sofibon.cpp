#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int f0 = 0, f1 = 1, fn = 0, i = 1;
        while(i < n)
        {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
            i++;
        }
        cout << fn << endl;


    }
}