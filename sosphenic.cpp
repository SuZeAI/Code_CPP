#include <bits/stdc++.h>

using namespace std;

int numberphenic(int n)
{
    int count = 0;

    for (int i = 2; i <= sqrt(n); i++)
        {
            int check = 0;
            while(n % i == 0)
            {
                n /= i;
                count++, check++;
                if (check > 1) return 0;
            }

        }
    if (n != 1) count++;
    if (count == 3) return 1;
    else return 0;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << numberphenic(n) << endl;
    }
}
