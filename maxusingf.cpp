#include<iostream>
using namespace std;

    int maxim(int x, int y,int z){
    
    if (x>y && x>z)
    return x;
   
    else if(y>z)
        return y;
    
    else 
    return z;  
    
    }
    int main(){
        int a,b,c,max;
        cout<<"Enter three nos";
        cin>>a>>b>>c;

        max=maxim(a,b,c);
        cout<<"Max of the numbers is "<<max<<endl;
    }
 
    
    
