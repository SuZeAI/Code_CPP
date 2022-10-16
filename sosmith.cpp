#include <bits/stdc++.h>

using namespace std;
int prime(int n )
{
    if (n == 1) return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if(n % i == 0 ) return 0;
    return 1;
}
int sumNumber(int n)
{
    int sum = 0;
    while(n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
} 

int sumWish(int n)
{
    int sum = 0;
    for (int i = 2; i <= sqrt(n); i++)
        {
            while(n % i == 0)
            {
                sum += sumNumber(i);
                n /= i;
            }
        }
    if(n != 1) sum += sumNumber(n);
    return sum;
}

int main()
{
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(prime(n) == 0 && sumWish(n) == sumNumber(n))
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
}