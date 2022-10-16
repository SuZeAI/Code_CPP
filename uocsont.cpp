#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n, i = 2;
		cin >> n;
		for(long long i = 2; i <=sqrt(n); i++)
		{ 
			while(n % i == 0)
			{
				n /= i; 
				cout << i << " " ;
			}
		}
	if (n != 1) cout << n;
	cout<<endl;
	}
}