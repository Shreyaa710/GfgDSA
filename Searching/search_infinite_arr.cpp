#include<iostream>
using namespace std;

int bSearch(int arr[], int low,int high, int key)
{
    if(low>high) return -1;

    int mid=(low+high)/2;
    if(arr[mid]==key)
    return mid;

    else if(arr[mid]<key)
    bSearch( arr, mid+1,high,  key);

    else
    bSearch( arr, low, mid+1 ,  key);
}

int search(int arr[], int x)
{
    if(arr[0] == x) return 0;

	int i = 1;

	while(arr[i] < x)
		i = i * 2;

	if(arr[i] == x) return i;


	return bSearch(arr, i / 2 + 1, i - 1, x);
}

int main()
{
    int arr[20],n,key;
    cout<<"Enter the no. of elements in array: "<<endl;
    cin>>n;
    cout<<"Enter elements of an array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter value to be searched : "<<endl;
    cin>>key;

    cout<<search(arr,key);
}