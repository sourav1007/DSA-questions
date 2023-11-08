#include<iostream>
using namespace std;
int LCM(int a,int b){
	int min;
	int i;
	if(a>b)
		min=a;
	else
		min= b;
	
	for( i=min;i<a*b;i++){
		if(i%a==0 && i%b==0){
			return i;
		}
	}	
}


void dtobi(int n){
	int bin=0;
	while(n>0){
		int rem=n%2;
		bin=(bin*10)+rem;
		n=n/2;
	}
	
	cout<< bin;
}


int main(){
	int a,b;
	cout<<"enter the two numbers ";
	cin>>a>>b;
    cout<<"the LCM of "<<a<<" and "<<b<<" is "<<	LCM(a,b)<<endl;;
    
    cout<<"binary number is :-";
    dtobi(20);
    
    
    
	return 0;
}
