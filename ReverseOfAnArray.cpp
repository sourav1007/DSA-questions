#include<iostream>
using namespace std;
int main(){
//reverse;

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
		
		
		int start=0;
		int end=size-1;
		
		while(start<end){
			int temp=arr[start];
			arr[start]=arr[end];
			arr[end]=temp;
			start++;
			end--;
			
			
		}
		cout<<"the reversed array is :- ";
		for(i=0;i<size;i++){
			cout<<arr[i]<<" ";
		}
	
		

		
		
		
		
		
	
	
	
	
	
	return 0;
}

