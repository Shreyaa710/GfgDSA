#include <iostream>
using namespace std;


void ToH(int n, char A, char B, char C) 
{ 
    if(n > 0) 
    { 
    ToH(n-1, A, C, B); 
    cout<<"Move " << n << " from " <<  A << " to " << C << endl; 
    ToH(n-1, B, A, C); 
    } 
}
	
int main() 
{
	int n = 3; 
    ToH(n, 'A', 'B', 'C'); 
	return 0;
}