#include<iostream>
using namespace std;
//__________________________________________________________
void input(int arr[],int size){
	cout<<"enter the elements of the array : ";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
}
//___________________________________________________________
void output(int arr[],int size){
	cout<<"the elements are : ";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
//____________________________________________________________
void sum(int arr[],int size){
	int sum=0;
	for(int i=0;i<size;i++){
		sum=sum+arr[i];
		
	}
	cout<<" the sum of elements is :"<<sum<<endl;	
}
//_____________________________________________________________
void max(int arr[],int size){
	int max=arr[0];
	for(int i=0;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		
	}
	cout<<"the maximum element is : "<< max<<" "<<endl;
	
}
//_____________________________________________________________
void min(int arr[],int size){
	int min=arr[0];
	for(int i=0;i<size;i++){
		if(arr[i]<min){
			min=arr[i];
		}
		
	}
	cout<<"the minimum element is : "<< min<<" "<<endl;
	
}
//_______________________________________________________________
void linearSearch(int arr[],int size,int n){
	int found=0;
	int i;
	
	for( i=0;i<size;i++){
		if(arr[i]==n){
        found=1;
		break;
	
		}
	}
	if(found){
		cout<<"the elements is present at index "<< i<< " "<< endl;
	}
	else{
		cout<<" the element is not present "<<endl ;
	}
	
}
//_______________________________________________________________________
void reverseArray(int arr[],int size){
	int start=0;
	int end=size-1;
	
	
	while(start<=end){
		swap(arr[start],arr[end]);     //inbuilt function swap
		                                         /* int a=arr[start];
	                                            	arr[start]=arr[end];
		                                             arr[end]=a; */
		start++;
		end--;	
	}
	
}
//_________________________________________________________________________
void swapAlternates(int arr[],int size){
	for(int i=0;i<size;i+=2){
		if(i+1<size){
		swap(arr[i],arr[i+1]);
			
		}
	
	}
	
}
//__________________________________________________________________________

void pairSum(int arr[],int size,int sum){
	
int i,j;
	
	for( i=0;i<size;i++){
		
		 for( j=i+1;j<size;j++){
		 	
		 	if(arr[i]+arr[j]==sum){
		 		
		 		cout<<"the pair is "<< arr[i]<<","<<arr[j] <<endl;
		 		
		 	break;
			 }
		 }
		
		 
	}
	
}

//____________________________________________________________________________
void tripleSum(int arr[],int size,int sum){
	int i,j,k;
	
	
	for( i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			for(k=j+1;k<size;k++){
				
				if(arr[i]+arr[j]+arr[k]==sum){
					cout<<"the triplet is "<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
					break;
				}
				
			}
		}
	}
	
	
	
	
	
}
//_____________________________________________________________________________
void sumOfOdd(int arr[],int size){
	int sum=0;
	for(int i=0;i<size;i++){
		if(arr[i]%2 !=0){
			sum=sum+arr[i];
		}
	}
	cout<<"sum of odd numbers is "<< sum<<endl;
	
	
	
	
	
	
}
//_____________________________________________________________________________
void binarySearch(int arr[],int size,int key){
	int found=0;
	int start=0;
	int end=size-1;
	int mid=(start+end)/2;
	
	while(start<=end){
		if(key==arr[mid]){
			
				found=1;
				break;
			
				}
		  else if(key>arr[mid]){
			start=mid+1;
			
		}
		else{
			end=mid-1;
		}
	   
	   mid=(start+end)/2;

	}
	if(found){
		cout<<"the key is present at index "<<mid<<endl;
	}
	else{
		cout<<"the key is not  present "<<endl ;
	}

	
	
	
}
//_____________________________________________________________________________

void selectionSort(int arr[],int size){
	int i,j;

for(i=0;i<size-1;i++){
	int minindex=i;
	for(j=i+1;j<size;j++){
		if(arr[j]<arr[minindex])
		 minindex=j;
	}
	
	swap(arr[minindex],arr[i]);
}
	
	
}
//___________________________________________________________________________________
void missrep(int arr[],int size){
		int min(arr,size);
		int max=max(arr,size);
	for(int i=0;i<max;i++){
	    if(()
		
	
			
		
	}
	
	
	
	
	
}
//________________________________________________________________________________


int main(){
	
int arr[15];
cout<<"ENTER THE SIZE OF THE ARRAY :";
int size;
cin>>size;
input(arr,size);
output(arr,size);
sum(arr,size);
max(arr,size);
min(arr,size);
//cout<<"ENTER THE ELEMENT TO BE SEARCHED : ";
//int key;
//cin>>key;
//linearSearch(arr,size,key);
//reverseArray(arr,size);
//output(arr,size);
//swapAlternates(arr,size);
//output(arr,size);

//pairSum(arr,size,7);
//tripleSum(arr,size,8);
//sumOfOdd(arr,size);
//binarySearch(arr,size,4);
selectionSort(arr,size);
output(arr,size);






	
	return 0;
}
