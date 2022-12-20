#include<iostream>
using namespace std;
int main(){
	
long long a;
cin>>a;
int temp=0;
try{
	while(a>0){
		temp++;
		a=a/10;
	}
	if(temp!=10)
	throw 1;
}
catch(int e){
	cout<<"the given mobile number is not valid\n";
}
return 0;
}

