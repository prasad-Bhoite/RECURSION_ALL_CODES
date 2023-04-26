//Reverse the string using Recursion...
#include<iostream>
using namespace std;

void reverse(string& str,int start,int end)
{
   //base case ...
   if(start >=end)
   {
     return;
   }

   //ek case solve krdo
   swap(str[start],str[end]);

   //Recursion sambhal lega...
   reverse(str,start+1,end-1);
}

int main()
{
  //Reverse the string Using RE ...
   string str;
   cout<<"Enter the String : "<<endl;
   cin>>str;

   reverse(str,0,str.size()-1);
   cout<<"Reverse string is "<<str<<endl;

}