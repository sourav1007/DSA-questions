#include<iostream>
using namespace std;
int main(){
	
	int arr[10];
	int size;
	int i;
	int sum=0;
	cout<<"enter the size of the array :- ";
	cin>>size;
	cout<<"enter the elements of the array :-";
	
	//taking input
	for(i=0;i<size;i++){
		
		cin>>arr[i];
		
	}
	//showing output
	cout<<" the array is :-";
	for(i=0;i<size;i++){
		
	cout<< arr[i]<<" ";

	}
	for(i=0;i<size;i++){
		sum=sum+arr[i];
		
		
	}
	cout<<"the sum of the elements of the array is "<< sum ;
	
	
	
		
		
			
	
	
	
	
	
	
	
	
	
	return 0;
}
