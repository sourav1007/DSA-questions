#include<iostream>
using namespace std;
int main(){
	//Linear search
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
		
	int key;
	cout<<"enter the element to be find ";
	cin>>key;
	
	for(i=0;i<size;i++){
		if(arr[i]==key){
			
		cout<<"element is present at " << i;
		
		
		}
		
	}	
		cout<<"element is not present ";
		
		
	
	
	
	

	
	return 0;
}
