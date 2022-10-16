#include <bits/stdc++.h>

using namespace std;

int tong(int n )
{
    int sum = n * (n + 1) / 2;
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n , k;
        cin >> n >> k;
        int z = n / k;
        int x = n % k;
        cout << z * tong(k - 1) + tong(x) << endl;
    }
}