#include<iostream>
using namespace std;

int chk_sub(string str1, string str2, int n, int m)
{
    int j=0;
    for(int i=0;i<n && j<m;i++)
    {
        if(str1[i] == str2[j])
        j++;
    }

    return (j==m);
}

int main()
{
    string str1="abcdef";
    string str2="ceaf";
    cout<<chk_sub(str1,str2,str1.length(),str2.length());
}