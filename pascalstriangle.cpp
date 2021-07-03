#include<bits/stdc++.h>
using namespace std;


//Factorial Iterative

int itfact(int n)
{
	int fact = 1;
	for(int i = 1 ; i <= n ; i++)
	{
		fact = fact * i;
	}

	return fact;
}

//Factorial Recursive

int refact(int n)
{
	if(n<1)
	{
		return 1;
	}
	return n * refact(n-1);
}


// Pascals Triangle

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin>>n;

	for(int i = 0 ; i <= n ; i++)
	{
		for(int j = 0 ; j <=i ; j++)
		{
			cout << (itfact(i)/(itfact(j) * itfact(i-j)))<<" ";
		}
		cout<<endl;
	}
	return 0;
}