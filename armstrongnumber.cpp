#include<iostream>
using namespace std;

int main()
{
    int num,res = 0;
    cin>>num;
    int n = num;
    while(n!=0)
    {
        int digit = n%10;
        res = res + ( digit*digit*digit );
        n = n/10;      
    }

    if(res == num)
    {
        cout<<"ARMSTRONG NUMBERS";
    }
    else
    {
        cout<<"not armstrong";
    } 
    return 0;
}