// alphabets should be same on different strings

#include<iostream>
using namespace std;

const int ch = 256;

bool anagram(string &s1, string &s2)
{
    int count[ch]={0};
    if(s1.length() != s2.length())
    return false;

    for(int i=0;i<s1.length();i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }

    for(int i=0;i<ch;i++){
        if(count[i] != 0)
        return false;
    }
    return true;
}

int main()
{
    string s1="abbds";
    string s2="asdbbg";

    cout<<anagram(s1,s2);
}