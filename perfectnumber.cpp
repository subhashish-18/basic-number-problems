#include<iostream>
using namespace std;

int main()
{
    int i=1,number,sum=0;
    cin>>number;
    while(i < number )  
    {  
        if(number % i == 0)  
        sum = sum + i;  
        i++;  
   }  
    if(number == sum)
    {
        cout<<"perfect number";
    }
    else
    {
        cout<<"no";
    }
    return 0;
}