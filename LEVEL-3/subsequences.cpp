#include<iostream>
using namespace std;

void subsequences(string str,string output,int i)
{
    //base case
    if(i==str.length())
    {
        cout<<output<<" ";
        return;
    }
    //excluding case ...
    subsequences(str,output,i+1);
    //add the output string
    output = output + str[i];
    //including case ...
    subsequences(str,output,i+1);
}

int main()
{
    cout<<"We have to print subsequences of a substring ";
    string str = "abc";
    string output;
    int i=0;
    subsequences(str,output,i);    
    return 0;
}
