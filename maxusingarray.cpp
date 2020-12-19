#include<iostream>
using namespace std;
int main(){
    int A[7]={1,3,4,6,7,2,9};
    int maximuum;
    maximuum=A[0];

        for(int i=0;i<=7;i++){
            if(A[i]>maximuum){
                maximuum=A[i];
            }            
        }
        cout<<"Maximum Number is: "<<maximuum<<endl;
        return 0;
}