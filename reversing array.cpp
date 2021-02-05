#include<bits/stdc++.h>
using namespace std;

void swap(int &x,int &y)
{
	int temp = x;
	x = y;
	y = temp;
}


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
	int i = 0;
	int j = 4;
	while(i<j)
	{
		swap(ar[i],ar[j]);
		i++;
		j--;
	}
	for(int i=0;i<5;i++)
	{
		cout<<ar[i]<<"  ";
	}
	return 0;
}


//Time Complexity = O(n)
//Space Complexity = O(1)
