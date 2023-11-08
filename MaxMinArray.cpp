#include<iostream>
using namespace std;
int main(){
	
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
		
		
		int max=arr[0];
		for(i=0;i<size;i++){
			
			if(arr[i]>max){
				max=arr[i];
			}
			
			
		}
		cout<<"the max element is :- "<< max <<endl;
		
		
		int min=arr[0];
		for(i=0;i<size;i++){
			
			if(arr[i]<min){
				min=arr[i];
			}
			
			
		}
		cout<<"the min element is :-"<< min ;
		
		
	
	
	
	
	
	
	
	
	
	return 0;
}





// MAX MIN USING FUNCTIONS


/*  #include<iostream>
using namespace std;
void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
int max(int arr[],int size){
	int max=arr[0];
	for(int i=0;i<size;i++){
		if(arr[i]>max)
		max=arr[i];
	}
	cout<<"the maximum element is "<< max <<" "<<endl;
	
}

int min(int arr[],int size){
	int min=arr[0];
	for(int i=0;i<size;i++){
		if(arr[i]<min)
		min=arr[i];
	}
	cout<<"the minimum element is "<< min <<" ";
	
}



int main(){
	int arr[15];
	int size;
	cout<<"enter the size of the array : ";
	cin>>size;
	
	cout<<"enter the elements of the array";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
    cout<<"the array is : ";
    printArray(arr,10);
    max(arr,10);
    min(arr,10);
	



	
	return 0;
}*/
