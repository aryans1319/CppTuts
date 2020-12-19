#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;
        for (int i = 1; i <= n; i++)
        {
            if (n%i==0)
            {
                cout<<"The factors are: "<<i<<endl;
            }
            
        }
        
}