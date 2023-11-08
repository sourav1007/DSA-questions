#include<iostream>
using namespace std;

int main(){
	int i=0,j=0,k=0;

	int arr1[5]={3,4,5,7,9};
	int arr2[4]={1,2,6,8};
	int arr3[9]={0};
	
	while(i<5 && j<4){
		if(arr1[i]<arr2[j]){
			arr3[k]=arr1[i];
			k++;
			i++;
		}
		else{
			arr3[k]=arr2[j];
			k++;
			j++;
			
		}
	}
	while(i<5){
		arr3[k]=arr1[i];
		k++;
		i++;
	}
	while(j<4){
		arr3[k]=arr2[j];
		k++;
		j++;
	}
	
	
	 
	  for(int i=0;i<9;i++){
	 	cout<<arr3[i]<<" ";
	 }
	
	
	




	
	return 0;
} 



