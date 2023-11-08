#include<iostream>
using namespace std;

int sum(int n){
	int digit;
	int sum=0;
	while(n>0){
		digit=n%10;
		sum=sum+digit;
		n=n/10;
	}
	return sum;
}
int isprime(int n){
	int isprime=1;
	for(int i=2;i<n;i++){
		if(n%i==0){
			isprime=0;
			break;
			
		}
	}
	return isprime;
}



int main(){
	
	cout<<"the sum of the digits is "<< sum(555)<<endl;
	cout<< "prime or not :-"<< isprime(sum(223));
	
	
	
	
	
	return 0;
	
}
