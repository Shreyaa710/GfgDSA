#include<iostream>
#include<unordered_set>
using namespace std;

bool isSumZero(int a[],int size)
{
  int pre_sum=0;
  unordered_set<int> s;
  for(int i=0;i<size;i++)
  {
    pre_sum+=a[i];
    if(s.find(pre_sum) != s.end())
      return true;
    else if(pre_sum==0)
      return true;
    else 
      s.insert(pre_sum);
  }
  return false;
}

int main()
{
  int a[]={-3,4,-3,1,1};
  cout<<isSumZero(a,5);
}
