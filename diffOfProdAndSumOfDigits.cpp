#include<iostream>
using namespace std;
int diff(int n){
	int sum=0;
	int prod=1;
	
	
		while(n!=0){
	    int x=n%10;
		sum=sum+x;
		prod=prod*x;
		n=n/10;
		
		}
	
	int ans = (prod-sum);
	cout<<ans;
	
	return 1 ;
}


int main(){

	diff(232);

	
	return 0;
	
}
