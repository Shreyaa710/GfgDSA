// leftmost character non-repeating first

#include<iostream>
#include<unordered_map>
using namespace std;

int index_of_leftmost(string &str)
{
    unordered_map<char,int>m;

    for(int i=0;i<str.length();i++)
    {
        if(m.find(str[i]) != m.end())
        m[str[i]]++;

        else
        m[str[i]]=1;
    }

    for(int i=0;i<str.length();i++)
    {
        if(m[str[i]]== 1)
        return i;
    }

    return -1;
}

int main()
{
    string st="affgha";
    cout<<index_of_leftmost(st);
}