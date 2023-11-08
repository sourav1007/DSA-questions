#include<iostream>
using namespace std;
//reverese of an arrray function
int rev(int arr[5],int size){
	
	int start=0;
	int end=size-1;
	
	 while(start<end){
	 	int temp=arr[start];
	 	arr[start]=arr[end];
	 	arr[end]=temp;
	 	start++;
	 	end--;
	 	
	 	
	 }
	
	
	
	
	
	
	
	
}

print(int arr[],int size){
	int i;
	
	for(i=0;i<size;i++){
		
		cout<<arr[i]<<" ";
		
	}
	
}
int main(){
	
	int arr[5]={7,5,6,9,8};
	print(arr,5);
	cout<<endl;
	rev(arr,5);
	print(arr,5);
	
	


		
		
		
		
		
	
	
	
	
	
	return 0;
}

