#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int i = 0 ;

	int sum = 0;

	while(n!=0)
	{
		int r = n%10 ;
		sum += r * pow(2,i);
		n = n/10 ;
		i++;
	}

	cout<<sum;
	return 0;
}