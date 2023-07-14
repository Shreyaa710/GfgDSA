#include <iostream>
using namespace std;

void printSub(string str, string curr, int index)
{
	if(index == str.length())
	{
		cout<<curr<<" ";
		return;
	}

	printSub(str, curr, index + 1);
	printSub(str, curr+str[index], index + 1);
}
	
int main() 
{
	string s="ABC";
   
    printSub(s,"",0);
   
	return 0;
}