#include<iostream>
using namespace std;

//pirme number..

int main(){
	int n;
	int i;
	int isprime=1;
	cout<<"enter the number to be checked :- ";
	cin>>n;
    for(i=2;i<n;){
    	
    	if(n%i==0){
    		
    	 isprime=0;	
    	 break;
    	
		}
		else {
			
			i++;
		}
	}
	
   if(isprime){
	
	cout<<" it is a prime number ";
	
     }
    else{
    	cout<<"it is not a prime number ";
    	
	}
	

	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
