#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
  cin>>n;
	vector<int> ar;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		ar.push_back(x);
	}
	int maximum = 0,minimum = 1;
	for(int i = 0;i<n;i++)
	{
		if(ar[i]>maximum)
		{
			maximum = ar[i];
		}
		if(ar[i]<minimum)
		{
			minimum = ar[i];
		}
	}
	cout<<"MIN: "<<minimum<<endl;
	cout<<"MAX: "<<maximum<<endl;
	return 0;
}


//Time Complexity = O(n)
//Space Complexity = O(n)
