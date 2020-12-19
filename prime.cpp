#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;

    bool flag=0;
   for (int i = 2; i*i<=x; i++)
            if (x%i==0)
   {
                cout<<"Non Prime"<<endl;
                flag=1;
                break;
   }
            if (flag==0)
   {
       cout<<"Prime"<<endl;
   }
   return 0;

   
    
}