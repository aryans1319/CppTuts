#include<iostream>
using namespace std;

int main(){
    int A[10]={2,4,6,8,10,12,14,16,18,20}
    int l=0, h=9, mid, key;
        cout<<"Enter Key: "<<endl;
        cin>>key;
            while (l<=h)
            {
                mid=(l+h)/2;
                if (key==A[mid])
                {
                    cout<<"Found at: "<<mid;
                }
                else if (key<A[mid])
                
                    h=mid-1;
                
                else
                
                    l=mid+1
                            
            }
            
            
                  
            
            cout<<"Not Found";
            return 0;
            
}