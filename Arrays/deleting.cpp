#include<iostream>
using namespace std;

int* Delete(int arr[],int n,int key)
{
    int l;
    
    for(l=0;l<n;l++)
    {
        if(arr[l]==key){
            break;
        } 
    }

   for(int j=l;j<n;j++)
   {
    arr[j]=arr[j+1];
   }
   return arr;

}

int main()
{
    int n,arr[100],key,pos;
    cout<<"Enter size of an array : ";
    cin>>n;

    cout<<"Enter Elements of an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Element to be deleted : ";
    cin>>key;


    int *result = Delete(arr,n,key);
    for(int i=0;i<n;i++){
        cout<<*(result+i)<<endl;
    }

}