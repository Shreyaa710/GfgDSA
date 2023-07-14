// left shift basically multiplying x * 2^y

#include<iostream>
using namespace std;

int main()
{
    int x=2;
    cout<<(x<<1)<<endl;
    cout<<(x<<2)<<endl;
    int y = 4;
	int z = x << y;
	cout << z << endl;
	return 0;
}