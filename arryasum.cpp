#include<iostream>
using namespace std;
int main(){
    int A[7]={1,2,1,1,1,1,1};
    int sum=0;

        for (int i = 0; i<7; i++)
        {
            sum=sum+A[i];
        }
        cout<<"Sum of all the elements in the array is: "<<sum<<endl;
        return 0;
}