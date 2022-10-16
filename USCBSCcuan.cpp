#include<bits/stdc++.h>
using namespace std;
long ucln(long a,long b)
{
	while(b)
	{
		long c=a;
		a=b;
		b=c%b;
	}
	return a;
}
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		long a;
		cin>>a;
		long u=1;
		for(long i=2;i<=a;i++)
		{
			u=u*i/ucln(u,i);
		}
		cout<<u<<endl;
	}
}