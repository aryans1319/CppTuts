#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        sum=sum+i;
    }
    cout<<"Sum of n natural number upto "<<n<<"is "<<sum<<endl;
    return 0;
}