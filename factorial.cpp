#include <iostream>
using namespace std;
//using loops
/*
int main()
{
    int number , fact = 1;
	cin>>number;
	for(int i = 1 ; i<=number ; i++)
	{
		fact *= i;
	}
    cout<<"FACTORIAL : "<<fact;
	return 0;
}
*/
//using functions
int factorial(int n)
{
	if(n<=1)
	{
		return 1;
	}
	return n*factorial(n-1);
}

int main()
{
   int a;
   cin>>a;
   cout<<factorial(a);
}