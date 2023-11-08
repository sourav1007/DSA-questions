#include<iostream>
using namespace std;
//function to find power of a number
int square(int num,int pow){
	
	/*cout<<"enter the number";
	cin>>num;
	cout<<"enter the power";
	cin>>pow;*/
	
	int i;
	int ans=1;
	for(i=0;i<pow;i++){
		
		ans=ans*num;
	}
	
	
	cout<<"the answer is "<<ans<< endl;
	return 0;
}


int main(){
	
	square(2,3);
	square(5,3);
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
