#include<iostream>
using namespace std;
char convert(char name)
{
    char ans= name -'a' +'A';

}
int main()

{
    char name;
    cin>>name;
    convert(name);
    cout<<convert(name);

}