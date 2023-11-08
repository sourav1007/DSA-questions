#include<iostream>
# define N
using namespace std;
ispalindrome(char string[],int size){
	int start=0;
	int end=size-1;
	int flag=1;
	
	while(start<=end){
		if(string[start] !=string[end]){
			flag=0;
			break;
 		}
 		else{
 			start++;
 			end--;
		 }
 		
	}
	if(flag){
		return 1;
	}
	else{
	return 0;
	}
}

int main(){
	
cout<<"enter the size of array ";
cin>>N;	
char s[N];
int size;
cout<<"enter the string ";
cin>>s;
cout<<"enter the size ";
cin>>size;

 if( ispalindrome(s,size)==0){
 	
 	for(int i=0;i<size-1;i++){
 		
 		cout<<"the characters required are :- "<<s[i]<<endl;
	 }
	 
 }
 else{
	 	cout<<" already a palindrome";
	 }
	return 0;
}
