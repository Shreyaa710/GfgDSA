#include<iostream>
using namespace std;

bool palindrome(string &str,int start,int end)
{
    if(start>=end) return true;
    
    return (str[start]==str[end]) && palindrome(str,start+1,end-1);
}

int main()
{
    string str;
    cout<<"Enter the string: "<<endl;
    cin>>str;
    int start=0;
    int end=str.size();
    cout<<"ans "<<palindrome(str,start,end);
}