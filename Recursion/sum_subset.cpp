#include <iostream>
using namespace std;


int count_sum(int arr[], int n,int sum)
{
    if(n==0)
    return (sum==0)?1:0;

    return count_sum(arr,n-1,sum)+count_sum(arr,n-1,sum-arr[n-1]);
}
	
int main() 
{
	int arr[5]={10,5,2,3,6}; 
    int sum=8;
    cout<<count_sum(arr,5,sum);
	return 0;
}