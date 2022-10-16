#include <bits/stdc++.h>
using namespace std;
/*int numnberwish(int n)
{
    int count_2 = 0;
    while(n % 2 == 0)
    {
        count_2++;
        n /= 2;
    }
    int count = 0;
    for (int i = 3; i <= sqrt(n); i++)
        while(n % i == 0)
        {
            count++;
            n /= i;
        }
    if (n != 1) count++;
    return count_2 * (count + 1);
}*/
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n,s=0;
		cin >> n;
		for(int i = 1; i < sqrt(n); i++){
			if(n % i == 0){
				if( i % 2 == 0) s++;
				if( (n / i) % 2 == 0) s++;
			}
		}
		int k = sqrt(n);
		if( k * k == n && k % 2 == 0) s++;
		cout << s << endl;
	}
}