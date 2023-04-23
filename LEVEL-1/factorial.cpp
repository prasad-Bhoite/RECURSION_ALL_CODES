//Factorial of given number in cpp....
#include<iostream>
using namespace std;

int factorial(int n)
{
    //1.base condition
    if(n==1) return 1;
    //Recursive Call
    int ans = n*factorial(n-1);
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the value of n:\n";
    cin>>n;

    cout<<factorial(n)<<endl;
    return 0;
}
