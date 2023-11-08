#include<iostream>
using namespace std;

//factorial of a number;

int main(){
	int n;
	int i;
	int fact=1;
	cout<<"enter the number ";
	cin>>n;
	
	for(i=1;i<=n;i++){
		
		fact=fact*i;
		
		
	}
	
	cout<<"the factorial of "<< n << " is "<< fact;
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
