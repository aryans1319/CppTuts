#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
      int max,min;
    if (x>y)
    {
        max=x;
        min=y;
    }
    else{ 
    
        max=y;
        min=x;
    }
        cout<<"Max= "<<max<<endl;
        cout<<"Min= "<<min<<endl;
    
    return 0;


}