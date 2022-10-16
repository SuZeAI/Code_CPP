#include <bits/stdc++.h>

using namespace std;
long long Mutiple(long long a, long long b)
{
    long long tmp = a * b;

    return tmp / __gcd(a, b); 
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long x, y, z, n;
        cin >> x >> y >> z >> n;
        long long mutiple = Mutiple(Mutiple(x, y), z);
        long long min = pow(10, n - 1) / mutiple;
        long long max = pow(10, n) / mutiple;
        if (min < 1 && max < 1) 
        {
            cout << "-1\n";
            continue;
        }
        if(min * mutiple >= pow(10, n - 1) )
        {
            cout << min * mutiple << endl;
        }
        else 
        {
            cout << (++min) * mutiple << endl;
        }

    }
}