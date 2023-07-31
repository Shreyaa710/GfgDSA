#include<iostream>
using namespace std;

void pat_search(string &str, string &pat)
{
    int m = pat.length();
    int n = str.length();

    for(int i=0;i< (n-m);i++)
    {
        int j;
        for(j=0;j<m;j++)
        {
            if(pat[j] != str[i+j])
            break;
        }

        if(j==m)
        cout<<i<<" ";
    }
}

int main()
{
    string s1="abababcd";
    string s2="abab";

    pat_search(s1,s2);
}