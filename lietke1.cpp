#include<bits/stdc++.h>
using namespace std;
long snt(long a)
{
	int dem=0;
	for(int i=2;i<a;i++)
	{
		if(a%i==0)
		{
			return 0;
		}
	}
	if(a==1)
		return 0;
	return 1;
}
int main()
{
	long a,b,min,max;
	cin>>a>>b;
	if(a>b)
	{
		min=b;
		max=a;
	}
	else
	{
		max=b;
		min=a;
	}
	for(long i=min;i<=max;i++)
	{
		if(snt(i)==1)
		{
			cout<<i<<" ";
		}
	}
}