#include<iostream>
using namespace std;

int main(){
    int A[10],n=10,i,key;
    cout<<"Enter Number: "<<endl;

        for (int i = 0; i < n; i++)
        {
            cin>>A[i];
        }
        cout<<"Enter key: "<<endl;
        cin>>key;

        for (int i = 0; i < n; i++)
        {
            if (key==A[i])
            {
                cout<<"Found at: "<<i;
                exit(0);
            }
        }
        cout<<"Not Found"<<endl;
        return 0;
}