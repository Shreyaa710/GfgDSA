#include<iostream>
#include<unordered_map>
using namespace std;

int count(string str)
{
    unordered_map<char,int>m;

    for(int i=0;i<str.length();i++)
    {
        if(m.find(str[i]) != m.end())
        {
            m[str[i]]++;
        }

        else
        m[str[i]] = 1;
    }

    for(auto x:m){
        cout<<(x.first)<<" "<<(x.second)<<endl;
    }
}

int main()
{
    string str="geeksforgeeks";
    count(str);
}