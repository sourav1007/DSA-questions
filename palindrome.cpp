#include<iostream>
using namespace std;

//palindrome number

int main(){
	int n;
	int sum=0;
	int l;
	
	cout<<"enter the number to be checked :-";
	cin>>n;
	int original=n;
	while(n!=0){
	l=n%10;
    sum= (sum*10)+l;
    n=n/10;
		}
		
		if(sum==original){
			
		cout<<"it is a palindrome number  ";
			
		}
		else{
		cout<<"it is not a palindrome number ";
			
		}

	
	
	

	
	
	
	
	
	return 0;
	
}
