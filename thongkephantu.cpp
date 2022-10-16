#include <bits/stdc++.h>

using namespace std;
const int a = 100;
int main()
{
    char po = 'a';
    int a[10005], i = 0;
    int check[10005] = {0};
    while(po != '\n')
    {
        cin >> a[i++];
        po = getchar();
    }
    for(int j = 0; j <i - 1; j++ )
    {
        if(check[j] == 0)
        {
            int count = 1;
            for(int k = j + 1; k < i; k++ )
            if(a[j] == a[k]) count++, check[k] = 1;
            cout << a[j] << " " << count << endl;
        }
    }
}