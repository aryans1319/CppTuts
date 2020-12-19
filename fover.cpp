#include<iostream>
using namespace std;

    int add(int x,int y){
    
        return x+y;
    }
    int add(int x,int y,int z)
{    
        return x+y+z;
}   
    float add(float x, float y){
        return x+y;
    }
    int main()
    {
        cout<<add(10,5)<<endl;
        cout<<add(10,2,12)<<endl;
        cout<<add(2.3f,5.7f)<<endl;
    }


