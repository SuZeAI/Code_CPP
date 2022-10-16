#include<bits/stdc++.h>
using namespace std;
long kt(long a)
{
	int dem=0;
	for(long i=1;i<=sqrt(a);i++)
	{
		if(a%i==0)
		{
			dem++;
		}
	}
	if(dem==1)
	{
		return 1;
	}
	return 0;
}
int main()
{
	long a;
	cin>>a;
	if(kt(a)==1)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}