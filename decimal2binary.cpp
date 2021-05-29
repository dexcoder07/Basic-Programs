#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

int main()
{
	int n;
	cin>>n;
	int ar[N];
	int x;
	int counter = 0;

	while(n!=0)
	{
		int r = n%2;
		n = n/2;
		ar[counter] = r;
		counter++;
	}
	for(int i = counter-1 ; i >= 0 ; i--)
	{
		cout<<ar[i]<<" ";
	}
	return 0;
}