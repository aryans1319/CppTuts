#include<iostream>
using namespace std;

int main(){

    //Question 1---//

    // int n;
    // cout<<"Enter a positve number";
    // cin>>n;

    // for (int i=1; i<=10; ++i)
    // {
    //     cout<<n<<"*"<<i<<"="<<i*n<<endl;
    // }
    // return 0;
    int n;
    int sum=0;

    cout<<"Enter a number";
    cin>>n;

    while (n>=0)
    {
    sum+=n;
    cout<<"Enter a number";
    cin>>n;
    }

    cout<<"\n The sum is"<<sum<<endl;
    return 0;
}