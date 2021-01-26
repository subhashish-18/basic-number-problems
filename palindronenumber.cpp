#include<iostream>
using namespace std;

int main()
{ 
    int num;
    cin>>num;
    int n,rev = 0;
    n = num;
       while(n!=0)
    {
        int digit = n%10;
        rev = (rev*10) + digit;
        n = n/10;
    }  
    if(num == rev)
    {
        cout<<"PALINDRONE NUMBER";
    }
    else
    {
        cout<<"NOT A PALINDRONE NUMBER";
    }

    return 0;
} 
