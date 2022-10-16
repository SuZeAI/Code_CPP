#include <bits/stdc++.h>
using namespace std;

int check(int n)
{
    int odd = 0, even = 0;
    int a;
    while (n)
    {
        a = n % 10;
        if (a % 2 == 0) even++;
        else odd++;
        n /= 10;
    }
    if (odd == even) return 1;
    else return 0;
}

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = pow(10 ,n - 1) ; i < pow(10, n); i++)
    {
        if (check(i) == 1) {
            cout << i << " ";
            count++;
        }
        if (count == 10) {
            count = 0;
            cout << endl;
        }
    }    
    return 0;
}