#include<iostream>
using namespace std;
int main(){
//reverse;
//this is just to print the reverse of the array
	int arr[10];
	int size;
	int i;
	cout<<"enter the size of the array :- ";
	cin>>size;
	cout<<"enter the elements of the array :-";
	
	for(i=0;i<size;i++){
		
		cin>>arr[i];
		
		
		
	}
	cout<<" the array is :-";
	for(i=0;i<size;i++){
	cout<< arr[i]<<" ";
		}
		
		cout<<"the reverse of the array is ";
		
	
	for(i=size-1;i>=0;i--){  //reverese of an array
		
		cout<< arr[i]<<" ";
	}
	
	cout<<" the array is :-";
	for(i=0;i<size;i++){
	cout<< arr[i]<<" ";
		}

	
	return 0;
}

