#include<iostream>
using namespace std;
void input(int arr[],int size){
	cout<<"enter the elements of the array : ";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
}

void output(int arr[],int size){
	cout<<"the elements are : ";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void binarySearch(int arr[],int size,int key){
	int found=0;
	int start=0;
	int end=size-1;
	int mid=(start+end)/2;
	
	while(start<=end){
		if(arr[mid]==key){
				found=1;
			
				}
		 if(key>arr[mid]){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
	   
	   mid=(start+end)/2;

	}
	if(found){
		cout<<"the key is present at index "<<mid;
	}
	else{
		cout<<"the key is not  present " ;
	}

	
	
	
}


int main(){
	int arr[20],size,key;
	cout<<"enter the size of the array : ";
	cin>>size;
	input(arr,size);
	output(arr,size);
	cout<<"enter the key to be searched ";
	cin>>key;
	binarySearch(arr,size,key);
	
	
	




	
	return 0;
}
