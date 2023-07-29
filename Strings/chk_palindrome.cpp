#include<iostream>
#include<unordered_map>
using namespace std;

int palindrome(string str)
{
    int i=0;
    int n=str.length()-1;
    while(i<(n-i))
    {
        if(str[i] != str[n-i]){
            return 0;
        }
        i++;
    }

    return 1;


}

int main()
{
    string str="abdcba";
    cout<<palindrome(str);
}