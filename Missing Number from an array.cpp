#include <bits/stdc++.h>
using namespace std;

/* Concept used is we are adding all the number given by the user and then we are taking sum of these number.
 * Then we are calculating the sum of natural number upto the highest number given by the user.
 * Substract the array sum from natural number sum.
 * If the sum of number given by the user is less than the sum of natural number then it will give the exact number
 * which is missing.
 * (APPLIED TO SINGLE NUMBER MISSING ONLY*/

//Time complexity = O(n) - 4n - 2
//Space Complexity = O(n) for the array + O(1) for sum and sum1 variable
int main()
{

//Taking size of the array
    int n;
    cin>>n;
    
//Defining two variable to store the sum
    int sum1 = 0,sum=0;
    
//Declaring the array
    int ar[n];
    
//Taking Input from user i.e, numbers(1,2,3,4,...,)
 
    sum = n(n+1)/2;
    
//Calculating the sum of the number in the array
    sum1 = accumulate(ar,ar+n,sum1);
    
//Calculating the sum of the natural numbers upto the highest number in the array, since the number is in increasing order so size = highest number.
    for(int i=0;i<=n;i++)
    {
        sum+=i;
    }
    
//Displaying the output.
    cout<<"Missing number is:"<<sum - sum1;
    return 0;
}
