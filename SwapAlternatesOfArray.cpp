#include<iostream>
using namespace std;

//swap alternates

int main(){
	
	int arr[7]={8,6,5,4,7,8,9};
	int size =7;
	int i;
	for(i=0;i<=size-2;i+=2){
		int temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
		
	}
	for(i=0;i<size;i++){
		
		cout<<arr[i]<<" ";
		
	}
	

		
		
		
		
		
	
	
	
	
	
	return 0;
}

