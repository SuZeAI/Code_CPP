#include <bits/stdc++.h>

using namespace std;
long long prime(long long n)
{
    if (n == 1) return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return 0;

    }
    return 1;
}
long long perfect(long long n)
{
    return pow(2, n - 1) * (pow(2, n) - 1);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, i = 1, check = 0;
        cin >> n;
        while(perfect(i) <= n)
        {
            if(perfect(i) == n && prime(pow(2, i) - 1) == 1)
            {
                cout << "1\n";
                check = 1;
            }
            i++;
        }
        if (check == 0) cout << "0\n";
    }
}