//Program to find number of swaps possible to get 01 but swaps are possible only with parity means even index with even index and odd index with odd index.

#include<iostream>
using namespace std;

int main(){
	int N,count=0;
	cout<<"Enter string length : ";
	cin>>N;
	int binStr[N];

	//Taking binary inputs
	for (int i=0;i<N;i++){
		int x;
		cin>>x;
		binStr[i]=x;
	}
	
	//Iterating the binary string 
	for(int i=0;i<N;i++){
		for(int j=N-1;j>i;j--){
			//Checking swapping count to get 01 for even indexed number
			if((i==0 || i%2==0) && (j==0 || j%2==0))
			{
					if(binStr[i]==1 && binStr[j]==0)
						count++;
			}

			// Checking swapping count to get 01 for odd indexded number
			else if((i==1 || i%2!=0) && (j==1 || j%2!=0)){
					if(binStr[i]==1 && binStr[j]==0)
						count++;
			}
		}
	}
//printing total swaps possible to get 01 as substring of the given string			
cout<<count<<endl;						
					
	
}
