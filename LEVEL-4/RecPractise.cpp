#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(vector<int>& arr,int target)
{
  //base case....
  if(target == 0 )
  {
    return 0;
  }

  if(target < 0)
  {
    return INT_MAX;
  }

  //1 case solve krdo.
  int mini = INT_MAX;

  for(int i=0;i<arr.size();i++)
  {
    //condition for checking the RC
      int ans  = solve(arr,target - arr[i]);
      if(ans!=INT_MAX)
      mini = min(mini,ans+1);
  }
  return mini;
}

int main() {
  cout<<"Print the count of the minimum number to react targeted sum "<<endl;
  vector<int> arr{1,2};
  int target = 5;
  int ans  = solve(arr,target);
  cout<<"Answer is "<<ans<<endl;
  return 0;
}