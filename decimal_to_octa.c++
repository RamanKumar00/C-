#include<iostream>
using namespace std;
int main()
{
    int num,rem,ans=0,mul=1;
    cout<<"enter the value of num: ";
    cin>>num;

    while(num>0)
    {
        rem=num%8;
        num=num/8;
        ans=rem*mul+ans;
        mul=mul*10;
        
    }
    cout<<ans;
    return 0;
}