#include <bits/stdc++.h>

using namespace std;

int prime(int n)
{
    if (n == 1) return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0; 
    return 1;
}

int up(int n)
{
    int a = n % 10;
    n /= 10;
    while(n)
    {
        int b = n % 10;
        if (b >= a) return 0;  
        a = b;
        n /= 10;
    }
    return 1;
}

int down(int n)
{
    int a = n % 10;
    n /= 10;
    while(n)
    {
        int b = n % 10;
        if (b <= a) return 0;  
        a = b;
        n /= 10;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, count = 0;
        cin >> n;
        for (int i = pow(10, n - 1); i < pow(10, n); i++)
            if(up(i) == 1 || down(i) == 1)
                {
                    if (prime(i) == 1)
                        count++;
                }
        cout << count << endl;
    }
}