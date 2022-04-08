#include<iostream>
using namespace std;

int gcd(int a,int b){
	if (b==0)
	return a;
	
	return gcd(b,a%b);
}


int main(){
	int l,b,area,x,output;
	cout<<"Enter the length and breath of the rectangle"<<endl;
	cin>>l>>b;
	area=l*b;
	x=gcd(l,b);
	output=area/(x*x);
	cout<<output<<endl;
	
	
}
