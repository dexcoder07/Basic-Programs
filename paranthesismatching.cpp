#include<bits/stdc++.h>
using namespace std;


void push(char element,char *stack,int &top,int size)
{
    if(top>size)
    {
        cout<<"Stack overflow";
    }
    else
    {
        stack[++top] = element;
    }
}

void pop(int &top)
{
    --top;
}

int isBalanced(char *exp,int size)
{
    char stack[size];
    int top = -1;
    for(int i = 0;exp[i]!='\0';i++)
    {
        if(exp[i]==')')
        {
            pop(top);
        }
        else
        if(exp[i]=='(')
        {
            push(exp[i],exp,top,size);
        }
    }
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
    
}
int main(void)
{

    char exp[15] = {"((a+b)*(c-d)))"};
    int x;
    x = isBalanced(exp,14);
    if(x==1)
    {
        cout<<"\nbalanced";
    }
    else
    {
        cout<<"\nNot balanced";
    }
    
    return 0;
}
