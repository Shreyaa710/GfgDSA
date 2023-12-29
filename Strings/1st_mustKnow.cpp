#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string str;

    // ways to declare a string

    //  1st
    // string str1(5,'n');
    // cout<<str1<<endl;

    // 2nd
    // getline will read spaces as well
    // getline(cin,str);
    // cout<<str<<endl;

    // cin will not read spaces

    // ##############################

    // functions in strings
    // string s1 ="fam";
    // string s2="ily";
    // s1.append(s2);
    // cout<<s1<<endl;

    // or '+' can be used rather than appned i.e s1+s2

    // str.clear() to empty the string
    // str.empty() to chk whether string is empty?

    // compare function
    // string s1="abc";
    // string s2="abc";

    // if(s1.compare(s2) == 0){
    //     cout<<"strings are equal"<<endl;
    // }

    // erasing characters in a string
    // string s1="nincompoop";
    // s1.erase(3,4); //(start index, no. of elements to be erased)
    // cout<<s1<<endl;

    // To get substring of string
    // string s1="nincompooppoo";
    // cout<<s1.find("poo")<<endl;

    // to insert something
    // string s1="nincompooppoo";
    // s1.insert(2,"lol");
    // string s=s1.substr(6,4);
    // cout<<s1<<endl;

    // string to integer
    // string s1="786";
    // int x=stoi(s1);
    // cout<<x+2<<endl;

    // integer to string 
    // int x=786;
    // cout<<to_string(x) + "2"<<endl;

    // sort a string
    string s1="jdifutheiurehge";

    sort(s1.begin(),s1.end());
    cout<<s1<<endl;
    return 0;
}