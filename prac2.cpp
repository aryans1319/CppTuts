// To print all odd numbers till n
#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cout<<"Enter a number";
//     cin>>n;

//     for ( int i = 1; i<=n; i++)
//     {
//         if (i%2==0)
//         {
//             continue;
//         }
        
//         cout<<i<<endl;
//     }
    
// }

// 2- To check whether a number is prime or not
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i;

    for ( i = 2; i<n; i++)
    {
        if (n%i==0)
        {
            cout<<"Number is not a prime number";
            break;
        }
    }
        if (i==n)
        {
            cout<<"Prime Number";
        }
    
    
    return 0;
}