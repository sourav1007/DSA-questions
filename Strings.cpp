#include<iostream>
#include<vector>
using namespace std;

void sort(string &v){
	
	for(int i=0;i<v.size();i++){
		int min=i;
		
		for(int j=i+1;j<v.size();j++){
			if(v[j]<v[min]){
				
				min=j;
			}
		
		}
			swap(v[min],v[i]);
	}
	
	
	
}



int main(){
	
string v;
cout<<"enter the string ";
cin>>v;
sort(v);
cout<<"the sorted string is "<<v;



	
	
	
	
	return 0;
}                                                                                                                                                                             
