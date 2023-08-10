#include<iostream>
using namespace std;

void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int c=0;
        int mul=1;
        int num=0;
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(i<k && k<=n-1){
                cout<<arr[k-i-1]<<" ";
                c++;
            }
            
            if(k>n-1)
            {
                num=num*10 + arr[i];
                flag=false;
            }
            
            if(c==k)
            {
                c=0;
                mul++;
                k=mul*k;
            }
        }
        
        if(flag== false)
        {
            while(num>0){
            cout<<num%10<<" ";
            num=num/10;
            }
        }
        
        
    }


    