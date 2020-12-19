#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the three sides of the triangle: "<<endl;
    cin>>a>>b>>c;
        if ( a==b && b==c && c==a)
        {
            cout<<"This an equilateral triangle";
        }
        else if (a==b || b==c)
        {
            cout<<"This is an isosceles triangle";
        }
        else
        {
            cout<<"This is an scalene triangle";
        }
    return 0;
}