#include<bits/stdc++.h>
using namespace std;
long sm(long a)
{
	long sm=0;
	while(a>0)
	{
		int b=a%10;
		sm=sm+b;
		a=a/10;
		if(a<1&&sm>=10)
		{
			a=sm;
			sm=0;
		}
	}
	return sm;
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
		cout<<sm(a)<<endl;
	}
}