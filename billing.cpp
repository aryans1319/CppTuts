#include<iostream>
using namespace std;
int main(){
    float amt;
    float discount;
    cout<<"Enter the amount: "<<endl;
    cin>>amt;
    cout<<"Bill amount is: "<<amt<<endl;
        if (amt<=100)
        {
            discount=0;
        }
        else if (amt>100 && amt<=500)
        {
            discount=(10*amt)/100;
        }
        else if (amt>500)
        {
            discount=(20*amt)/100;
        }

    cout<<"discount is: "<<discount<<endl;
    cout<<"Discounted amount is : "<<(amt-discount)<<endl;
    return 0;
        
        
}