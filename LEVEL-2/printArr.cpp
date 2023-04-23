//PrintArr using Recursion...
#include<iostream>
using namespace std;

void PrintArr(int arr[],int n,int i)
{
    //1.base condition
    if(i>=n)
    {
        return;
    }
    //processing
    cout<<arr[i]<<" ";
    //Recursion call
    PrintArr(arr,n,i+1);
}
int main()  
{
    int arr[100] = {1,2,3,4,5};
    int n=5;
    int i=0;
    PrintArr(arr,n,i);
    return 0;
}
