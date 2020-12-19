#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter number: "<<endl;
    cin>>n;
        for (int i = 1; i <=n; i++)
        {
            if (n%i==0)
            {
                sum=sum+i;
            }
        }
        if (2*n==sum)
        
            cout<<"Perfect Number"<<endl;
        
        else
        {
            cout<<"Not a Perfect Number"<<endl;
        }
        return 0;
}