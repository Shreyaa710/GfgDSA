#include<iostream>
using namespace std;

int* insert(int arr[],int len,int key,int pos)
{
    int index=pos-1;
    if(len==pos)
    {
        cout<<"cannot be inserted";
    }
    else{
        for(int i=len;i>=index;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[index]=key;
        return arr;
    }
    
}

int main()
{
    int n,arr[100],key,pos,len;
    cout<<"Enter size of an array : ";
    cin>>n;

    cout<<"Enter length of an array : ";
    cin>>len;
    cout<<"Enter Elements of an array : ";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }

    cout<<"Element to be inserted : ";
    cin>>key;

    cout<<"Position of an element : ";
    cin>>pos;
    int *result = insert(arr,len,key,pos);
    for(int i=0;i<n;i++){
        cout<<*(result+i)<<endl;
    }

}