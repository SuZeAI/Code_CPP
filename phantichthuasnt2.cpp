#include <bits/stdc++.h>
using namespace std;

int snt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return 0;
    return 1;
}
int main()
{
    int n, i = 2;
    cin >> n;
    while(snt(n) == 0)
    { 
        int count = 0; 
        while(n % i == 0)
        {
            count++;
            n /= i;
        }
       
        if (count)
        {
            cout << i << " " << count << endl;
        }
        i++;
    }
    if (n != 1) cout << n << " 1" ;

}