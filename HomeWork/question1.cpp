//Find Last Occurance of Given string ...
#include <iostream>
using namespace std;

void RightToLeftSearch(string str,char x,int i,int& ans )
{
  if(i<0)
  {
    return;
  }

  if(str[i]==x)
  {
    ans = i;
    return;
  }
  RightToLeftSearch(str,x,i-1,ans);
}

int main() {
  //find last occurance of the character...
  //M1:  strchr()
  //M2:  LeftToRightSearch()...
  //M3:  RightToLeftSearch()...

   string str;
   cout<<"Enter the string "<<endl;
   cin>>str;
  
   char x;
   cout<<"Enter the character "<<endl;
   cin>>x;

   int i = str.size()-1;
   int ans = -1;
   RightToLeftSearch(str,x,i,ans);
   cout<<"Answer is : "<<ans<<endl;
   return 0;
}