#include<iostream>
#include<algorithm>

using namespace std;
int fact(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}



int main(){
	string s;
	cout<<"enter the string ";
	cin>>s;
	cout<<s;
	int count=0;
	for(int i=0;i<s.size();i++){
		count++;
	}
	cout<<" the permutation is "<<fact(count);
		sort(s.begin(),s.end());
cout<<s;
	

	
	
	return 0;
	
}
