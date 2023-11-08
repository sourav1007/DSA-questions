#include<iostream>
using namespace std;


//swapping without third variable;
int main(){
	
	int a,b;
	cout<<"enter the two numbers to be swapped ";
	cin>>a>>b;
	cout<<"the numbers are:- a= "<<a<<" and  b= "<< b;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<" now a="<<a<<endl<<" and b= "<< b;
	
	
	
	
	
	
	
	return 0;
	
}
