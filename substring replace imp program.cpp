#include<iostream>
#include<string>
using namespace std;
int main(){
int t,x;
cin>>t;
while(t--){
	string s1="party",s2="pawri";
	string s;
	cin>>s;
	/*x=s.find(s1);
	while(x!=-1){
		s.replace(x,5,s2);
		x=s.find(s1,x+5);
	}*/
	for(int i=0;i<s.length();i++){
			
	if(s.substr(i,5)==s1){
		s[i]='p';
		s[i+1]='a';
		s[i+2]='w';
		s[i+3]='r';
		s[i+4]='i';
		i=i+5;
	}
	
}
	cout<<s<<endl;
}
return 0;
}

