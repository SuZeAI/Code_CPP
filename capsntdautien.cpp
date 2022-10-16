#include<bits/stdc++.h>
using namespace std;
long snt(long a)
{
	int dem=0;
	for(int i=2;i<=sqrt(a);i++)
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
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		long a,check=0;
		cin>>a;
		for(int i=2;i<=a/2;i++)
		{
			if(snt(i)==1&&snt(a-i)==1)
			{
				cout<<i<<" "<<a-i<<endl;
				check=1;
				break;
			}
		}
		if(check==0)
		{
			cout<<"-1"<<endl;
		}
	}
}