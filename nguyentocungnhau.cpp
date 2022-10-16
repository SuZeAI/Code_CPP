#include <bits/stdc++.h>

using namespace std;
int prime(int n)
{
    if(n == 1 || n ==0 ) return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return 0;
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        int count = 0;
        for (int i = 1; i < x; i++)
            if(__gcd(x, i) == 1)
                count++;
        if (prime(count) == 1)
            cout << "1";
        else    
            cout <<  "0";
        cout << endl;
    }
}