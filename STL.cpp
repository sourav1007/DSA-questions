#include<iostream>
#include<array>
using namespace std;
void array(){
	
		array<int,5> arr={1,2,3,4,5};
	int size =arr.size();   // to know the size of STL array

	for(int i=0;i<size;i++){ 
		cout<<arr[i]<<" "<<endl;                      //to acess the array.
	}
	
	cout<<"element at index 2nd is "<<arr.at(2)<<endl ;
	cout<<"is array empty or not ? :- "<<arr.empty()<<endl;
	cout<< "first element is "<<arr.front()<<endl;
	cout<<"last element is "<< arr.back()<<endl;
}

int main(){
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
