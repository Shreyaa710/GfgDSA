#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isRotated(string &s1, string &s2)
{
    if(s1.length() < s2.length()) return false;

    return ((s1+s1).find(s2) != string::npos);
}

int main()
{
    string s1="dabbas";
    string s2="asb";
    cout<<isRotated(s1,s2);
}