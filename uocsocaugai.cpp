#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , p , count = 0;
        cin >> n >> p;
        for (int i = 2; i <= n; i++)
        {
            int tmp = i;
            while(tmp % p == 0)
            {
                count++;
                tmp /= p;
            }
        }
        cout << count << endl;
    }
}