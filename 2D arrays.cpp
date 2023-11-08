#include<iostream>
using namespace std;
void linearsearch(int arr[][20],int key,int row,int col){
	int i,j;
	for(i=0;i<row;i++){
		
		for( j=0;j<col;j++){
			if(key==arr[i][j]);
			break;
		}
	}
	cout<<"key is at index "<< i<<","<<j;
}



int main(){
	int arr[20][20];
	int rowsize;
	int colsize;
	cout<<"enter the number of rows :- ";
	cin>>rowsize;
	cout<<"enter the number of columns :- ";
	cin>>colsize;
	cout<<"enter the elements of the matrix :- ";
	for(int i=0;i<rowsize;i++){
		for(int j=0;j<colsize;j++){
			
			cin>>arr[i][j];
		}
		
	}
	cout<<"the matrix is :- "<<endl ;
	for(int i=0;i<rowsize;i++){
		for(int j=0;j<colsize;j++){
			
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	linearsearch(arr,6,5,5);
	
	return 0;
}
