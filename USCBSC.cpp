#include<bits/stdc++.h>
using namespace std;
long ucln(long a,long b)
{
	if(a==0||b==0)
	{
		return a+b;
	}
	while(a!=b)
	{
		if(a>b)
		{
			a=a-b;
		}
		else
		{
			b=b-a;
		}
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
		long a,b;
		cin>>a>>b;
		cout<<a*b/ucln(a,b)<<" "<<ucln(a,b)<<endl;
	}
}