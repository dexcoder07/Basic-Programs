#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	int a, b, c;

	cin>>a>>b>>c;

	int x = max(max(a,b),c);
	if((a*a)+(b*b)==(c*c))
	{
		cout<<"Pythogorian triplet";
	}
	else
	{
		cout<<"not triplet";
	}
	return 0;
}