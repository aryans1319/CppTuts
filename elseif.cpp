#include<iostream>
using namespace std;

int main(){

    int a,b;
    cin>>a>>b;

    if (a==b)
    {
        cout<<"Both numbers are equal";
    }
    else if (a>b)
    {
        cout<<"A is greater than b";
    }
    else
    {
        cout<<"B is greater than a";
    }

    return 0;

}