#include<bits/stdc++.h>
using namespace std;


int main(){
	// use of pairs in c++  

	pair<int,string>p;
	// p=make_pair(2,"abc");
	p={5,"dag"};
	pair<int,string> &p1=p; //if we dont use & then value would remain same as 5(same as p)
	p1.first=3;

	cout<<p.first<<" "<<p.second<<endl;
}