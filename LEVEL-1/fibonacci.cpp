//Fibonacci series in cpp...
#include<iostream>
using namespace std;

int fibonacci(int n)
{
    //1.base condition...
    if(n==0 || n==1)
    {
        return 1;
    }
    //Recursion call....
    return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    int n;
    cout<<"Which fibonacci number you want to print:\n";
    cin>>n;
    int ans=fibonacci(n);
    cout<<"nth fibonacci number is = "<<ans;
    return 0;
}