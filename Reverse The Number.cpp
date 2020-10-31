#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	long int n,ans;
	while(t--)
	{
		cin>>n;
		ans=0;
		while(n!=0)
		{
			ans=(ans*10)+n%10;
			n=n/10;
		}
		cout<<ans<<endl;
		
	}
	return 0;
}
